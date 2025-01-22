
#include "triangle.h"

Triangle::Triangle(int sa, int sb, int sc, int aA, int aB, int aC)
{
    std::string name{"Треугольник"};
    setName(name);
    int sumAngles = (aA + aB + aC);

    if (sumAngles != 180)
    {
        std::cout << name << " не создан: \n";
        throw FigureExcept("сумма углов не равна 180 \n");
    }

    a = sa;
    b = sb;
    c = sc;

    A = aA;
    B = aB;
    C = aC;
};

Triangle::~Triangle() {};

int Triangle::get_a() { return a; };
int Triangle::get_b() { return b; };
int Triangle::get_c() { return c; };
int Triangle::get_A() { return A; };
int Triangle::get_B() { return B; };
int Triangle::get_C() { return C; };

std::string Triangle::outSides()
{
    return "a=" + std::to_string(get_a()) + " b=" + std::to_string(get_b()) + " c=" + std::to_string(get_c());
}
std::string Triangle::outAngles()
{
    return "A=" + std::to_string(get_A()) + " B=" + std::to_string(get_B()) + " C=" + std::to_string(get_C());
}
