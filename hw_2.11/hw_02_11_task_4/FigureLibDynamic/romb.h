#ifndef ROMB_H
#define ROMB_H

#ifdef FIGURELIBDYNAMIC_EXPORTS
#define FIGURELIBDYNAMIC_API __declspec(dllexport)
#else
#define FIGURELIBDYNAMIC_API __declspec(dllimport)
#endif

#include "parallelogramm.h"

// Ромб
class FIGURELIBDYNAMIC_API Romb : public Parallelogramm
{
public:
    Romb(int sa, int aA, int aB);
};

#endif // ROMB_H