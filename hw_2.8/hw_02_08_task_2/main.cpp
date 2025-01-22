// Задача 2. Исключения в конструкторах

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
#include "figureexcept.h"

using namespace std;

void print_info(Figure *f)
{
    cout << f->getName() << " создан:";
    cout << "\nСтороны: " << f->outSides() << "\nУглы: " << f->outAngles() << "\n";
}

int main(int argc, char **argv)
{
    FigureExcept f_exc; // Для вывода общей надписи "Ошибка создания фигуры. Причина: "

    // Треугольник
    try
    {
        Triangle triangle(10, 20, 30, 30, 60, 90);
        Figure *p_triangle = &triangle;
        print_info(p_triangle);
        cout << "\n";
    }
    catch (const FigureExcept &ex)
    {
        cerr << f_exc.err() << ex.what() << '\n';
    }
    // Прямоугольный треугольник
    try
    {
        Rectangular rectangular(10, 20, 30, 90, 60, 30);
        Triangle *p_rectangular = &rectangular;
        print_info(p_rectangular);
        cout << "\n";
    }
    catch (const FigureExcept &ex)
    {
        cerr << f_exc.err() << ex.what() << '\n';
    }
    // Равнобедренный треугольник
    try
    {
        IsoscelesTriangle isoscelesTriangle(10, 20, 10, 45, 90, 45);
        Triangle *p_isoscelesTriangle = &isoscelesTriangle;
        print_info(p_isoscelesTriangle);
        cout << "\n";
    }
    catch (const FigureExcept &ex)
    {
        cerr << f_exc.err() << ex.what() << '\n';
    }
    // Равносторонний треугольник
    try
    {
        EquilateralTriangle equilateralTriangle(30, 30, 30, 50, 70, 60);
        Triangle *p_equilateralTriangle = &equilateralTriangle;
        print_info(p_equilateralTriangle);
        cout << "\n";
    }
    catch (const std::exception &ex)
    {
        cerr << f_exc.err() << ex.what() << '\n';
    }

    // Четырёхугольник
    try
    {
        Quadrangle quadrangle(10, 20, 30, 40, 90, 90, 90, 90);
        Figure *p_quadrangle = &quadrangle;
        print_info(p_quadrangle);
        cout << "\n";
    }
    catch (const std::exception &ex)
    {
        cerr << f_exc.err() << ex.what() << '\n';
    }
    // Прямоугольник
    try
    {
        Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        Quadrangle *p_rectangle = &rectangle;
        print_info(p_rectangle);
        cout << "\n";
    }
    catch (const std::exception &ex)
    {
        cerr << f_exc.err() << ex.what() << '\n';
    }
    // Квадрат
    try
    {
        Square square(10, 10, 10, 10, 90, 90, 90, 90);
        Quadrangle *p_square = &square;
        print_info(p_square);
        cout << "\n";
    }
    catch (const std::exception &ex)
    {
        cerr << f_exc.err() << ex.what() << '\n';
    }
    // Параллелограмм
    try
    {
        Parallelogramm parallelogramm(30, 20, 20, 30, 120, 60, 60, 120);
        Quadrangle *p_parallelogramm = &parallelogramm;
        print_info(p_parallelogramm);
        cout << "\n";
    }
    catch (const std::exception &ex)
    {
        cerr << f_exc.err() << ex.what() << '\n';
    }
    // Ромб
    try
    {
        Romb romb(30, 30, 30, 30, 60, 120, 60, 120);
        Quadrangle *p_romb = &romb;
        print_info(p_romb);
        cout << "\n";
    }
    catch (const std::exception &ex)
    {
        cerr << f_exc.err() << ex.what() << '\n';
    }

    return 0;
}