// Задача 2. Динамическая библиотека

#include <iostream>
#include <Windows.h>

#include "Leaver.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	Leaverns::Leaver leaver;

	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << leaver.leave(name) << '\n';

	return 0;
}
