//#pragma once
#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#ifdef FIGURELIBDYNAMIC_EXPORTS
#define FIGURELIBDYNAMIC_API __declspec(dllexport)
#else
#define FIGURELIBDYNAMIC_API __declspec(dllimport)
#endif

#include "triangle.h"

// Равнобедренный треугольник
class FIGURELIBDYNAMIC_API IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(int sa, int sb, int aA, int aB);
};

#endif // ISOSCELESTRIANGLE_H
