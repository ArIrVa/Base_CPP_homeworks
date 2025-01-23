// Задача 2. Остальные операции с дробями

#include <iostream>

using namespace std;

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction() {};
    Fraction(int numerator, int denominator)
    {
        if (denominator == 0) // деление на ноль
            throw runtime_error("Ошибка! Деление на ноль!");
        numerator_ = numerator;
        denominator_ = denominator;
    }

    string print_fraction()
    {
        return to_string(numerator_) + "/" + to_string(denominator_);
    }

    // Сложение
    Fraction operator+(const Fraction &other) const
    {
        if (denominator_ == other.denominator_)
        {
            return Fraction{(numerator_ + other.numerator_), denominator_}; // если делитель одинаковый
        }
        else
        {
            return Fraction{numerator_ * other.denominator_ + denominator_ * other.numerator_, denominator_ * other.denominator_}; // приведение к общему делителю
        }
    }
    // Вычитание
    Fraction operator-(const Fraction &other) const
    {
        if (denominator_ == other.denominator_)
        {
            return Fraction{(numerator_ - other.numerator_), denominator_}; // если делитель общий
        }
        else
        {
            return Fraction{numerator_ * other.denominator_ - denominator_ * other.numerator_, denominator_ * other.denominator_}; // приведение к общему делителю
        }
    }
    // Умножение
    Fraction operator*(const Fraction &other) const
    {
        // сокращение числителя и знаменателя
        if (numerator_ == other.denominator_)
        {
            return Fraction{other.numerator_, denominator_};
        }
        else if (other.numerator_ == denominator_)
        {
            return Fraction{numerator_, other.denominator_};
        }
        // без сокращения
        else
        {
            return Fraction{numerator_ * other.numerator_, denominator_ * other.denominator_};
        }
    }
    // Деление
    Fraction operator/(const Fraction &other) const
    {
        // если делитель общий
        if (denominator_ == other.denominator_)
        {
            return Fraction{numerator_, other.denominator_};
        }
        else
        {
            return Fraction{numerator_ * other.denominator_, denominator_ * other.numerator_};
        }
    }
    // Оператор унарного минуса
    Fraction operator-() const
    {
        return Fraction{-numerator_, denominator_};
    }
    // Префиксные операторы
    Fraction &operator++()
    {
        numerator_ += denominator_;
        return *this;
    }
    Fraction &operator--()
    {
        numerator_ -= denominator_;
        return *this;
    }
    // Постфиксные операторы
    Fraction operator++(int)
    {
        Fraction copy{*this};
        ++(*this);
        return copy;
    }
    Fraction operator--(int)
    {
        Fraction copy{*this};
        --(*this);
        return copy;
    }
};

int main()
{
    int num_1{}, den_1{}, num_2{}, den_2{};

    cout << "Введите числитель дроби 1: ";
    cin >> num_1;
    cout << "Введите знаменатель дроби 1: ";
    cin >> den_1;
    cout << "Введите числитель дроби 2: ";
    cin >> num_2;
    cout << "Введите знаменатель дроби 2: ";
    cin >> den_2;

    Fraction f1(num_1, den_1);
    Fraction f2(num_2, den_2);

    Fraction original_f1 = f1; // значение первой дроби до операции инкремента
    Fraction add = f1 + f2;
    Fraction sub = f1 - f2;
    Fraction mult = f1 * f2;
    Fraction div = f1 / f2;
    Fraction un_minus_f1 = -f1, un_minus_f2 = -f2;
    Fraction pre_inc_f1 = ++f1;                 // значение первой дроби после операции преинкремента
    Fraction post_dec_f1 = f1--;                // значение первой дроби после операции постдекремента
    Fraction pre_increment = pre_inc_f1 * f2;   // результаты умножения двух дробей
    Fraction post_decrement = post_dec_f1 * f2; // после операций инкремента/декремента с первой дробью

    cout << f1.print_fraction() << " + " << f2.print_fraction() << " = " << add.print_fraction() << '\n';
    cout << f1.print_fraction() << " - " << f2.print_fraction() << " = " << sub.print_fraction() << '\n';
    cout << f1.print_fraction() << " * " << f2.print_fraction() << " = " << mult.print_fraction() << '\n';
    cout << f1.print_fraction() << " / " << f2.print_fraction() << " = " << div.print_fraction() << '\n';
    cout << f1.print_fraction() << " -> " << un_minus_f1.print_fraction() << "    " << f2.print_fraction()
         << " -> " << un_minus_f2.print_fraction() << '\n';

    cout << "++" << original_f1.print_fraction() << " * " << f2.print_fraction() << " = "
         << pre_increment.print_fraction() << '\n';
    cout << "Значение дроби 1 = " << pre_inc_f1.print_fraction() << '\n';
    cout << post_dec_f1.print_fraction() << "--" << " * " << f2.print_fraction() << " = " << post_decrement.print_fraction() << '\n';
    cout << "Значение дроби 1 = " << f1.print_fraction() << '\n';

    return 0;
}