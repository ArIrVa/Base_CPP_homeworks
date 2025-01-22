#include "parallelogramm.h"

Parallelogramm::Parallelogramm(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD) : Quadrangle(sa, sb, sc, sd, aA, aB, aC, aD)
{
    std::string name{"Параллелограмм"};
    setName(name);

    if (sa != sc || sb != sd)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("стороны 'а' и 'с' или 'b' и 'd' не равны \n");
    }
    if (aA != aC || aB != aD)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("углы А и С или B и D не равны \n");
    }
}