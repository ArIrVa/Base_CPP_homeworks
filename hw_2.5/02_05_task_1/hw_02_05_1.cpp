// Задача 1. Фигуры. Количество сторон

#include <iostream>
#include <string>

using namespace std;

class Figure // родительский класс
{
protected:
    int sides_count{};
    string name{};

    Figure(int s, string n) // защищенный конструктор с параметрами
    {
        sides_count = s;
        name = n;
    }

public:
    Figure() // публичный конструктор без параметров
    {
        sides_count = 0;
        name = "Фигура";
    };
    int get_sides_count() { return sides_count; }
    string get_name() { return name; }
};

// класс Треугольник
class Triangle : public Figure
{
public:
    Triangle()
    {
        sides_count = 3;
        name = "Треугольник";
    };
};

// класс Четырехугольник
class Quadrangle : public Figure
{
public:
    Quadrangle()
    {
        sides_count = 4;
        name = "Четырехугольник";
    };
};

int main(int argc, char **argv)
{
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    cout << "Количество сторон:" << '\n';
    cout << figure.get_name() << ": " << figure.get_sides_count() << "\n";
    cout << triangle.get_name() << ": " << triangle.get_sides_count() << "\n";
    cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << "\n";

    return 0;
}