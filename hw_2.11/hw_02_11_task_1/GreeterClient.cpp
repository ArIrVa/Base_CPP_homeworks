// Задача 1. Статическая библиотека

#include <iostream>
#include <Windows.h>

#include "Greeter.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	Greeterns::Greeter greeter;

	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << greeter.greet(name) << '\n';

	return 0;
}
