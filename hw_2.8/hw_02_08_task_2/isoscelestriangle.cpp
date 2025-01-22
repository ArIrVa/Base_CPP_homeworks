#include "isoscelestriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int sa, int sb, int sc, int aA, int aB, int aC) : Triangle(sa, sb, sc, aA, aB, aC)
{
    std::string name{"Равнобедренный треугольник"};
    setName(name);

    if (sa != sc)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("стороны 'а' и 'с' не равны \n");
    }
    else if (aA != aC)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("углы А и С не равны \n");
    }
}