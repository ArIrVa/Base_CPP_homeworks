#ifndef RECTANGULAR_H
#define RECTANGULAR_H


#include "triangle.h"

// Прямоугольный треугольник
class Rectangular : public Triangle
{
public:
    Rectangular(int sa, int sb, int sc, int aA, int aB);
};

#endif // RECTANGULAR_H