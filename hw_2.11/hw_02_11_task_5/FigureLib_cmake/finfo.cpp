// finfo.cpp - ������� ���������� � ������

#include <iostream>
//#include "figure.h"
#include "finfo.h"

using namespace std;

namespace Finfo
{
    void FigureInfo::printFigureInfo(Figure* f)
    {
        cout << f->getName() << ":";
        cout << "\n�������: " << f->outSides() << "\n����: " << f->outAngles() << "\n";
    }
}