#ifndef FIGURE_H
#define FIGURE_H

#include <string>

// родительский класс
class Figure
{
private:
    std::string name{}; // наименование фигуры
    int sides_count{};  // количество сторон

protected:
    void setName(std::string n);

public:
    Figure(); // конструктор без параметра
    std::string getName();
    int getSidesCount();
    virtual std::string outSides();
    virtual std::string outAngles();
};

#endif // FIGURE_H