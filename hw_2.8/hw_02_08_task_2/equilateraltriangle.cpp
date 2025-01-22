#include "equilateraltriangle.h"

EquilateralTriangle::EquilateralTriangle(int sa, int sb, int sc, int aA, int aB, int aC) : Triangle(sa, sb, sc, aA, aB, aC)
{
    std::string name{"Равносторонний треугольник"};
    setName(name);

    if (sa != sb || sb != sc || sa != sc)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("стороны не равны \n");
    }
    else if (aA != aB || aB!= aC || aA != aC)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("углы не равны \n");
    }
}