#ifndef FIGUREEXCEPT_H
#define FIGUREEXCEPT_H

#include <iostream>
#include <exception>

class FigureExcept : public std::exception
{
public:
    FigureExcept() {}

    std::string getMessage() const { return message; }
    FigureExcept(const std::string &message) : message{message} {}
    const char *what() const noexcept override
    {
        return message.c_str();     // получаем из std::string строку const char*
    }

    std::string err()
    {
        return "Ошибка создания фигуры. Причина: ";
    }

private:
    std::string message; // сообщение об ошибке
};
#endif // FIGUREEXCEPT_H