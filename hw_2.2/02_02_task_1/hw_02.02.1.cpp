// Задача 1. Калькулятор двух чисел

#include <iostream>

using namespace std;

class Calculator
{
private:
    double num1{};
    double num2{};

public:
    // сеттер для num1
    bool set_num1(double _num1)
    {
        if (_num1 != 0)
        {
            num1 = _num1;
            return true;
        }
        else
        {
            return false;
        }
    }
    // сеттер для num2
    bool set_num2(double _num2)
    {
        if (_num2 != 0)
        {
            num2 = _num2;
            return true;
        }
        else
        {
            return false;
        }
    }
    // сложение
    double add()
    {
        return num1 + num2;
    }
    // умножение
    double multiply()
    {
        return num1 * num2;
    }
    // вычитание num2 из num1
    double subtract_1_2()
    {
        return (num1 - num2);
    }
    // вычитание num1 из num2
    double subtract_2_1()
    {
        return (num2 - num1);
    }
    // деление num1 на num2
    double divide_1_2()
    {
        return num1 / num2;
    }
    // деление num2 на num1
    double divide_2_1()
    {
        return num2 / num1;
    }
};

int main()
{
    Calculator calculator;
    double user_num1{}, user_num2{};

    while (true)            // бесконечный цикл, завершается закрытием терминала
    {
        cout << "Введите первое число (num1): ";
        cin >> user_num1;        
        calculator.set_num1(user_num1);
        while (calculator.set_num1(user_num1) == false)
        {
            cout << "Неверный ввод!" << '\n';
            cout << "Введите первое число (num1): ";
            cin >> user_num1;
            calculator.set_num1(user_num1);
        }

        cout << "Введите второе число (num2): ";
        cin >> user_num2;       
        calculator.set_num2(user_num2);
        while (calculator.set_num2(user_num2) == false)
        {
            cout << "Неверный ввод!" << '\n';
            cout << "Введите второе число (num2): ";
            cin >> user_num2;
            calculator.set_num2(user_num2);
        }
        cout << "num1 + num2 = " << calculator.add() << '\n';
        cout << "num1 - num2 = " << calculator.subtract_1_2() << '\n';
        cout << "num2 - num1 = " << calculator.subtract_2_1() << '\n';
        cout << "num1 * num2 = " << calculator.multiply() << '\n';
        cout << "num1 / num2 = " << calculator.divide_1_2() << '\n';
        cout << "num2 / num1 = " << calculator.divide_2_1() << '\n';
    }

    return 0;
}
