// Задача 5*. Иерархия классов в DLL и CMake
//

#include <iostream>
#include <string>
#include <Windows.h>
#include <clocale>

#include "figure.h"
#include "finfo.h"
#include "triangle.h"
#include "rectangular.h"
#include "isoscelestriangle.h"
#include "equilateraltriangle.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogramm.h"
#include "romb.h"

using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Finfo::FigureInfo figureinfo;

    Triangle triangle(10, 20, 30, 50, 60, 70);
    Rectangular rectangular(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectanglens::Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogramm parallelogramm(20, 30, 30, 40);
    Romb romb(30, 30, 40);

    Figure* p_triangle = &triangle;
    Figure* p_quadrangle = &quadrangle;
    Triangle* p_rectangular = &rectangular;
    Triangle* p_isoscelesTriangle = &isoscelesTriangle;
    Triangle* p_equilateralTriangle = &equilateralTriangle;
    Quadrangle* p_rectangle = &rectangle;
    Quadrangle* p_square = &square;
    Quadrangle* p_parallelogramm = &parallelogramm;
    Quadrangle* p_romb = &romb;

    figureinfo.printFigureInfo(p_triangle);
    cout << "\n";
    figureinfo.printFigureInfo(p_rectangular);
    cout << "\n";
    figureinfo.printFigureInfo(p_isoscelesTriangle);
    cout << "\n";
    figureinfo.printFigureInfo(p_equilateralTriangle);
    cout << "\n";
    figureinfo.printFigureInfo(p_quadrangle);
    cout << "\n";
    figureinfo.printFigureInfo(p_rectangle);
    cout << "\n";
    figureinfo.printFigureInfo(p_square);
    cout << "\n";
    figureinfo.printFigureInfo(p_parallelogramm);
    cout << "\n";
    figureinfo.printFigureInfo(p_romb);

    system("pause");

    return 0;
}
