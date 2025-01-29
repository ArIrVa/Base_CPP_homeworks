#include "rectangle.h"

Rectangle::Rectangle(int sa, int sb) : Quadrangle(sa, sb, sa, sb, 90, 90, 90, 90)
{
    setName("Прямоугольник");
}