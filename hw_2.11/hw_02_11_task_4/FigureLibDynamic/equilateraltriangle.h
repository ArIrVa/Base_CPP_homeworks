//#pragma once
#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#ifdef FIGURELIBDYNAMIC_EXPORTS
#define FIGURELIBDYNAMIC_API __declspec(dllexport)
#else
#define FIGURELIBDYNAMIC_API __declspec(dllimport)
#endif

#include "isoscelestriangle.h"

// Равносторонний треугольник
class FIGURELIBDYNAMIC_API EquilateralTriangle : public IsoscelesTriangle
{
public:
    EquilateralTriangle(int sa);
};

#endif  // EQUILATERALTRIANGLE_H