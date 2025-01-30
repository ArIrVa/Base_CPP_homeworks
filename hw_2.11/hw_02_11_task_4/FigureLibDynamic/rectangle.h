#ifndef RECTANGLE_H
#define RECTANGLE_H

#ifdef FIGURELIBDYNAMIC_EXPORTS
#define FIGURELIBDYNAMIC_API __declspec(dllexport)
#else
#define FIGURELIBDYNAMIC_API __declspec(dllimport)
#endif

#include "quadrangle.h"

namespace Rectanglens 
{
	// Прямоугольник
	class FIGURELIBDYNAMIC_API Rectangle : public Quadrangle
	{
	public:
		Rectangle(int sa, int sb);
	};
}

#endif // RECTANGLE_H
