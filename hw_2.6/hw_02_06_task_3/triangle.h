#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

// класс Треугольник
class Triangle : public Figure
{
private:
    int a{}; // сторона a
    int b{}; // сторона b
    int c{}; // сторона c
    int A{}; // угол A
    int B{}; // угол B
    int C{}; // угол C

public:
    Triangle(int sa, int sb, int sc, int aA, int aB, int aC);

    // геттеры к свойствам треугольника
    int get_a();
    int get_b();
    int get_c();
    int get_A();
    int get_B();
    int get_C();

    std::string outSides() override;
    std::string outAngles() override;
};

#endif // TRIANGLE_H