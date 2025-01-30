// finfo.cpp - выводит информацию о фигуре

#include <iostream>
//#include "figure.h"
#include "finfo.h"

using namespace std;

namespace Finfo
{
    void FigureInfo::printFigureInfo(Figure* f)
    {
        cout << f->getName() << ":";
        cout << "\nСтороны: " << f->outSides() << "\nУглы: " << f->outAngles() << "\n";
    }
}