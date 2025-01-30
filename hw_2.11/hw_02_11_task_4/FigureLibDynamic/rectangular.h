#ifndef RECTANGULAR_H
#define RECTANGULAR_H

#ifdef FIGURELIBDYNAMIC_EXPORTS
#define FIGURELIBDYNAMIC_API __declspec(dllexport)
#else
#define FIGURELIBDYNAMIC_API __declspec(dllimport)
#endif

#include "triangle.h"

// Прямоугольный треугольник
class FIGURELIBDYNAMIC_API Rectangular : public Triangle
{
public:
    Rectangular(int sa, int sb, int sc, int aA, int aB);
};

#endif // RECTANGULAR_H