// Задача 2. Класс

#include <iostream>
#include <string>
#include "counter.h"

using namespace std;

int main()
{
    Counter u_counter;
    char sign{};         // вводимый знак команды
    string choice{};     // выбор установки начального значения счетчика
    int initial_value{}; // начальное значение счетчика

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