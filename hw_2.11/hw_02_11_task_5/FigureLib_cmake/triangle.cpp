
#include "triangle.h"

Triangle::Triangle(int sa, int sb, int sc, int aA, int aB, int aC)
{
    setName("�����������");
    a = sa;
    b = sb;
    c = sc;
    A = aA;
    B = aB;
    C = aC;
};

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