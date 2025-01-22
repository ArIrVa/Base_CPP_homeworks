#include "rectangle.h"

Rectangle::Rectangle(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD) : Quadrangle(sa, sb, sc, sd, aA, aB, aC, aD)
{
    std::string name{"Прямоугольник"};
    setName(name);

    if (sa != sc || sb != sd)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("противолежащие стороны не равны");
    }

    if (aA != 90 || aB != 90 || aC != 90 || aD != 90)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("углы не равны 90");
    }
}