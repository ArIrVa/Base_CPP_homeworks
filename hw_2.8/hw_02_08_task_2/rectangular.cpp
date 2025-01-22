#include "rectangular.h"

Rectangular::Rectangular(int sa, int sb, int sc, int aA, int aB, int aC) : Triangle(sa, sb, sc, aA, aB, aC)
{
    std::string name{"Прямоугольный треугольник"};
    setName(name);

    if (aC != 90)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("угол С не равен 90 \n");
    }
}
