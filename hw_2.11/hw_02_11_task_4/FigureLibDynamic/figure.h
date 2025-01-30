//#pragma once

#ifndef FIGURE_H
#define FIGURE_H

#ifdef FIGURELIBDYNAMIC_EXPORTS
#define FIGURELIBDYNAMIC_API __declspec(dllexport)
#else
#define FIGURELIBDYNAMIC_API __declspec(dllimport)
#endif

#include <string>



// родительский класс
class FIGURELIBDYNAMIC_API Figure
{
private:
    std::string name{}; // наименование фигуры
    int sides_count{};  // количество сторон

protected:
    void setName(std::string n);

public:
    Figure(); // конструктор без параметра
    std::string getName();
    // void setName(std::string n);
    int getSidesCount();
    virtual std::string outSides();
    virtual std::string outAngles();
};

#endif // FIGURE_H