#ifndef SQUARE_H
#define SQUARE_H

#ifdef FIGURELIBDYNAMIC_EXPORTS
#define FIGURELIBDYNAMIC_API __declspec(dllexport)
#else
#define FIGURELIBDYNAMIC_API __declspec(dllimport)
#endif

#include "rectangle.h"

// Квадрат
class FIGURELIBDYNAMIC_API Square : public Rectanglens::Rectangle
{
public:
    Square(int sa);
};

#endif // SQUARE_H