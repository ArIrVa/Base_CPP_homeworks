#include "square.h"

Square::Square(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD) : Quadrangle(sa, sb, sc, sd, aA, aB, aC, aD)
{
    std::string name{"Квадрат"};
    setName(name);

    if (sa != sb || sb != sc || sa != sc)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("стороны не равны");
    }

    if (aA != 90 || aB != 90 || aC != 90 || aD != 90)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("углы не равны 90");
    }
}