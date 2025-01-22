#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include "figure.h"
#include "figureexcept.h"

// класс Четырехугольник
class Quadrangle : public Figure
{
private:
    int a{}; // сторона a
    int b{}; // сторона b
    int c{}; // сторона c
    int d{}; // сторона d
    int A{}; // угол A
    int B{}; // угол B
    int C{}; // угол C
    int D{}; // угол D
public:
    Quadrangle(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD);

    // геттеры к свойствам четырехугольника
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();

    std::string outSides() override;
    std::string outAngles() override;
};
#endif // QUADRANGLE_H