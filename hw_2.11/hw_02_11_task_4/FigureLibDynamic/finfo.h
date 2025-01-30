//#pragma once

#ifndef FINFO_H
#define FINFO_H

#ifdef FIGURELIBDYNAMIC_EXPORTS
#define FIGURELIBDYNAMIC_API __declspec(dllexport)
#else
#define FIGURELIBDYNAMIC_API __declspec(dllimport)
#endif

#include "figure.h"

namespace Finfo
{
	class FIGURELIBDYNAMIC_API FigureInfo {
	public:
		void printFigureInfo(Figure* f);

	};
	
};

#endif //FINFO_H
