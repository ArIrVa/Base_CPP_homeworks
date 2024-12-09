// Задача 1. Месяцы

#include <iostream>
#include <string>

using namespace std;

enum class months
{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main()
{
    int number{};

    cout << "Введите номер месяца: ";
    cin >> number;

    while (number != 0)
    {
        months month = static_cast<months>(number);
        switch (month)
        {
        case months::Jan:
            cout << "Январь" << '\n';
            break;
        case months::Feb:
            cout << "Февраль" << '\n';
            break;
        case months::Mar:
            cout << "Март" << '\n';
            break;
        case months::Apr:
            cout << "Апрель" << '\n';
            break;
        case months::May:
            cout << "Май" << '\n';
            break;
        case months::Jun:
            cout << "Июнь" << '\n';
            break;
        case months::Jul:
            cout << "Июль" << '\n';
            break;
        case months::Aug:
            cout << "Август" << '\n';
            break;
        case months::Sep:
            cout << "Сентябрь" << '\n';
            break;
        case months::Oct:
            cout << "Октябрь" << '\n';
            break;
        case months::Nov:
            cout << "Ноябрь" << '\n';
            break;
        case months::Dec:
            cout << "Декабрь" << '\n';
            break;
        }
        if (number < 0 || number > 12)
        {
            cout << "Неправильный номер! \n";
        }
        cout << "Введите номер месяца: ";
        cin >> number;
    }
    cout << "До свидания \n";

    return 0;
}
