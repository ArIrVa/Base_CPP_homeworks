// Задача 2. Счётчик

#include <iostream>
#include <string>

using namespace std;

class Counter
{
private:
    int counter{};

public:
    
    Counter(int counter) {}     // конструктор с параметром    
    Counter() { counter = 1; }  // конструктор без параметра

    // сеттер
    void set_counter(int _counter)
    {
        counter = _counter;
    }
    // геттер
    int get_counter()
    {
        return counter;
    }
    // увеличение счетчика
    int increase()
    {
        return counter++;
    }
    // уменьшение счетчика
    int lessen()
    {
        return counter--;
    }
    // обработка команд увеличения/уменьшения счетчика
    void processing(char ch) 
    {
        if (ch == '+')
        {
            increase();
        }
        else if (ch == '-')
        {
            lessen();
        }
    }
};

int main()
{
    Counter u_counter;
    char sign{};        // вводимый знак команды
    string choice{};    // выбор установки начального значения счетчика
    int initial_value{};    // начальное значение счетчика

    cout << "Вы хотите указать начальное значение счётчика? Введите no или yes: ";
    cin >> choice;
    if (choice == "yes")
    {
        cout << "Введите начальное значение счётчика: ";
        cin >> initial_value;
        u_counter.set_counter(initial_value);
    }
    else if (choice == "no")
    {
        ;
    }

    while (sign != 'x')   
    {
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> sign;
        if (sign == '=')
        {
            cout << u_counter.get_counter() << '\n';
        }
        else
        {
            u_counter.processing(sign);
        }
    }
    cout << "До свидания!" << '\n';

    return 0;
}
