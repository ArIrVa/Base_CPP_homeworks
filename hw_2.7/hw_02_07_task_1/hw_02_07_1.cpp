// Задача 1. Препроцессорные директивы

#include <iostream>

using namespace std;

#define MODE 1

#ifndef MODE
#error Необходимо определить MODE
#endif

#if MODE == 1
int add(int a, int b)
{
    return a + b;
}
#endif

int main()
{

#if MODE == 0
    cout << "Работаю в режиме тренировки" << '\n';
#elif MODE == 1
    int a{}, b{};
    cout << "Работаю в боевом режиме" << '\n';
    cout << "Введите число 1: ";
    cin >> a;
    cout << "Введите число 2: ";
    cin >> b;
    cout << "Результат сложения: " << add(a, b) << '\n';
    cout << '\n';
#else
    std::cout << "Неизвестный режим. Завершение работы" << '\n';
#endif

    return 0;
}