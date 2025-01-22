#include "romb.h"

Romb::Romb(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD) : Quadrangle(sa, sb, sc, sd, aA, aB, aC, aD)
{
    std::string name{"Ромб"};
    setName(name);

    if (sa != sb || sb != sc || sa != sc)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("стороны не равны");
    }
    if (aA != aC || aB != aD)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("углы А и С или B и D не равны \n");
    }
}