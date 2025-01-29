#include "isoscelestriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int sa, int sb, int aA, int aB) : Triangle(sa, sb, sa, aA, aB, aA)
{
    setName("Равнобедренный треугольник");
}