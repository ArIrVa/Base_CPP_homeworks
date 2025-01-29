// Задача 1. Простейший проект

#include <iostream>
#include <Windows.h>

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string name{};

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Здравствуйте, " << name << "! \n";

    return 0;
}