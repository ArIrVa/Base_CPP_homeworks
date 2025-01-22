#ifndef PARALLELOGRAMM_H
#define PARALLELOGRAMM_H

#include "quadrangle.h"

// Параллелограмм
class Parallelogramm : public Quadrangle
{
public:
    Parallelogramm(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD);
};

#endif // PARALLELOGRAMM_H