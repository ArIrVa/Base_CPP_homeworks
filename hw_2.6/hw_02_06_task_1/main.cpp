// Задача 1. Математические функции

#include <iostream>
#include "mathfun.h"

using namespace std;

int main()
{
    int num1{}, num2{}, num_operation{};

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    cin >> num_operation;
    cout << '\n';

    switch (num_operation)
    {
    case 1:
        cout << num1 << " плюс " << num2 << " = " << add(num1, num2);
        cout << '\n';
        break;
    case 2:
        cout << num1 << " минус " << num2 << " = " << sub(num1, num2);
        cout << '\n';
        break;
    case 3:
        cout << num1 << " умножить на " << num2 << " = " << mult(num1, num2);
        cout << '\n';
        break;
    case 4:
        cout << num1 << " делить на " << num2 << " = " << division(num1, num2);
        cout << '\n';
        break;
    case 5:
        cout << num1 << " в степени " << num2 << " = " << expo(num1, num2);
        cout << '\n';
        break;
    default:
        break;
    }
    cout << '\n';
    return 0;
}
