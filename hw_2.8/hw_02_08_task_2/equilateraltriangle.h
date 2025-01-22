#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include "isoscelestriangle.h"

// Равносторонний треугольник
class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(int sa, int sb, int sc, int aA, int aB, int aC);
};

#endif  // EQUILATERALTRIANGLE_H