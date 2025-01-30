#include "quadrangle.h"

Quadrangle::Quadrangle(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD)
{
    setName("Четырёхугольникє"); 
    a = sa;
    b = sb;
    c = sc;
    d = sd;
    A = aA;
    B = aB;
    C = aC;
    D = aD;
}

int Quadrangle::get_a() { return a; };
int Quadrangle::get_b() { return b; };
int Quadrangle::get_c() { return c; };
int Quadrangle::get_d() { return d; };
int Quadrangle::get_A() { return A; };
int Quadrangle::get_B() { return B; };
int Quadrangle::get_C() { return C; };
int Quadrangle::get_D() { return D; };

std::string Quadrangle::outSides()
{
    return "a=" + std::to_string(get_a()) + " b=" + std::to_string(get_b()) + " c=" + std::to_string(get_c()) + " d=" + std::to_string(get_d());
}
std::string Quadrangle::outAngles()
{
    return "A=" + std::to_string(get_A()) + " B=" + std::to_string(get_B()) + " C=" + std::to_string(get_C()) + " D=" + std::to_string(get_D());
}