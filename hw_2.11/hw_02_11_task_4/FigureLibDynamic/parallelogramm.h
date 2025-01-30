#ifndef PARALLELOGRAMM_H
#define PARALLELOGRAMM_H

#ifdef FIGURELIBDYNAMIC_EXPORTS
#define FIGURELIBDYNAMIC_API __declspec(dllexport)
#else
#define FIGURELIBDYNAMIC_API __declspec(dllimport)
#endif

#include "quadrangle.h"

// Параллелограмм
class FIGURELIBDYNAMIC_API Parallelogramm : public Quadrangle
{
public:
    Parallelogramm(int sa, int sb, int aA, int aB);
};

#endif // PARALLELOGRAMM_H