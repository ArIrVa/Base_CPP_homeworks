#ifndef SQUARE_H
#define SQUARE_H

#include "quadrangle.h"

// Квадрат
class Square : public Quadrangle
{
public:
    Square(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD);
};

#endif // SQUARE_H