// Задача 3. Иерархия классов

#include <iostream>
#include <string>

#include "figure.h"
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

void print_info(Figure * f)
    {
        cout << f->getName() << ":";
        cout << "\nСтороны: " << f->outSides() << "\nУглы: " << f->outAngles() << "\n";
    }

int main(int argc, char **argv)
{
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Rectangular rectangular(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogramm parallelogramm(20, 30, 30, 40);
    Romb romb(30, 30, 40);

    Figure *p_triangle = &triangle;
    Figure *p_quadrangle = &quadrangle;
    Triangle *p_rectangular = &rectangular;
    Triangle *p_isoscelesTriangle = &isoscelesTriangle;
    Triangle *p_equilateralTriangle = &equilateralTriangle;
    Quadrangle *p_rectangle = &rectangle;
    Quadrangle *p_square = &square;
    Quadrangle *p_parallelogramm = &parallelogramm;
    Quadrangle *p_romb = &romb;

    print_info(p_triangle);
    cout << "\n";
    print_info(p_rectangular);
    cout << "\n";
    print_info(p_isoscelesTriangle);
    cout << "\n";
    print_info(p_equilateralTriangle);
    cout << "\n";
    print_info(p_quadrangle);
    cout << "\n";
    print_info(p_rectangle);
    cout << "\n";
    print_info(p_square);
    cout << "\n";
    print_info(p_parallelogramm);
    cout << "\n";
    print_info(p_romb);

    return 0;
}