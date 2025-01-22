#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "quadrangle.h"

// Прямоугольник
class Rectangle : public Quadrangle
{
public:
    Rectangle(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD);
};

#endif // RECTANGLE_H