#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "triangle.h"

// Равнобедренный треугольник
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(int sa, int sb, int aA, int aB);
};

#endif // ISOSCELESTRIANGLE_H