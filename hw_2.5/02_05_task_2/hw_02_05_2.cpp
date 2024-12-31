// Задача 2. Фигуры. Стороны и углы

#include <iostream>
#include <string>

using namespace std;

// родительский класс
class Figure
{
private:
    string name{};     // наименование фигуры
    int sides_count{}; // количество сторон

protected:
    void setName(string n) { name = n; }

public:
    Figure() { setName("Фигура"); }
    string getName() { return name; }
    int getSidesCount() { return sides_count; }
    virtual string outSides() { return ""; }
    virtual string outAngles() { return ""; }
};

// класс Треугольник
class Triangle : public Figure
{
private:
    int a{}; // сторона a
    int b{}; // сторона b
    int c{}; // сторона c
    int A{}; // угол A
    int B{}; // угол B
    int C{}; // угол C
public:
    Triangle(int sa, int sb, int sc, int aA, int aB, int aC)
    {
        setName("Треугольник");
        a = sa;
        b = sb;
        c = sc;
        A = aA;
        B = aB;
        C = aC;
    };
    // геттеры к свойствам треугольника
    int get_a() { return a; };
    int get_b() { return b; };
    int get_c() { return c; };
    int get_A() { return A; };
    int get_B() { return B; };
    int get_C() { return C; };

    string outSides() override
    {
        return "a=" + to_string(get_a()) + " b=" + to_string(get_b()) + " c=" + to_string(get_c());
    }
    string outAngles() override
    {
        return "A=" + to_string(get_A()) + " B=" + to_string(get_B()) + " C=" + to_string(get_C());
    }
};

// Прямоугольный треугольник
class Rectangular : public Triangle
{
public:
    Rectangular(int sa, int sb, int sc, int aA, int aB) : Triangle(sa, sb, sc, aA, aB, 90)
    {
        setName("Прямоугольный треугольник");
    }
};

// Равнобедренный треугольник
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(int sa, int sb, int aA, int aB) : Triangle(sa, sb, sa, aA, aB, aA)
    {
        setName("Равнобедренный треугольник");
    }
};

// Равносторонний треугольник
class EquilateralTriangle : public IsoscelesTriangle
{
public:
    EquilateralTriangle(int sa) : IsoscelesTriangle(sa, sa, 60, 60)
    {
        setName("Равносторонний треугольник");
    }
};

// класс Четырехугольник
class Quadrangle : public Figure
{
private:
    int a{}; // сторона a
    int b{}; // сторона b
    int c{}; // сторона c
    int d{}; // сторона d
    int A{}; // угол A
    int B{}; // угол B
    int C{}; // угол C
    int D{}; // угол D
public:
    Quadrangle(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD)
    {
        setName("Четырехугольник");
        a = sa;
        b = sb;
        c = sc;
        d = sd;
        A = aA;
        B = aB;
        C = aC;
        D = aD;
    };
    // геттеры к свойствам четырехугольника
    int get_a() { return a; };
    int get_b() { return b; };
    int get_c() { return c; };
    int get_d() { return d; };
    int get_A() { return A; };
    int get_B() { return B; };
    int get_C() { return C; };
    int get_D() { return D; };

    string outSides() override
    {
        return "a=" + to_string(get_a()) + " b=" + to_string(get_b()) + " c=" + to_string(get_c()) + " d=" + to_string(get_d());
    }
    string outAngles() override
    {
        return "A=" + to_string(get_A()) + " B=" + to_string(get_B()) + " C=" + to_string(get_C()) + " D=" + to_string(get_D());
    }
};

// Прямоугольник
class Rectangle : public Quadrangle
{
public:
    Rectangle(int sa, int sb) : Quadrangle(sa, sb, sa, sb, 90, 90, 90, 90)
    {
        setName("Прямоугольник");
    }
};

// Квадрат
class Square : public Rectangle
{
public:
    Square(int sa) : Rectangle(sa, sa)
    {
        setName("Квадрат");
    }
};

// Параллелограмм
class Parallelogramm : public Quadrangle
{
public:
    Parallelogramm(int sa, int sb, int aA, int aB) : Quadrangle(sa, sb, sa, sb, aA, aB, aA, aB)
    {
        setName("Параллелограмм");
    }
};

// Ромб
class Romb : public Parallelogramm
{
public:
    Romb(int sa, int aA, int aB) : Parallelogramm(sa, sa, aA, aB)
    {
        setName("Ромб");
    }
};

void print_info(Figure *f)
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
