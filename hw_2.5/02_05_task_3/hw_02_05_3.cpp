// Задача 3. Фигуры. Методы

#include <iostream>
#include <string>

using namespace std;

// родительский класс
class Figure
{
private:
    string name;     // наименование фигуры
    int sides_count; // количество сторон
protected:
    void setName(string n) { name = n; }
    void setSidesCount(int s) { sides_count = s; }
    virtual bool Iscorrect()
    {
        if (sides_count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    Figure()
    {
        setName("Фигура");
        setSidesCount(0);
    }
    string getName() { return name; }
    int getSidesCount() { return sides_count; }
    string correctState()
    {
        if (Iscorrect())
        {
            return "Правильная";
        }
        else
        {
            return "Неправильная";
        }
    }
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
protected:
    bool Iscorrect()
    {
        if (getSidesCount() == 3 && (get_A() + get_B() + get_C()) == 180)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    Triangle(int sa, int sb, int sc, int aA, int aB, int aC)
    {
        setName("Треугольник");
        setSidesCount(3);
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
protected:
    bool Iscorrect()
    {
        if (Triangle::Iscorrect() && get_C() == 90)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    Rectangular(int sa, int sb, int sc, int aA, int aB) : Triangle(sa, sb, sc, aA, aB, 90)
    {
        setName("Прямоугольный треугольник");
    }
};

// Равнобедренный треугольник
class IsoscelesTriangle : public Triangle
{
protected:
    bool Iscorrect()
    {
        if (Triangle::Iscorrect() && get_a() == get_c() && get_A() == get_C())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    IsoscelesTriangle(int sa, int sb, int aA, int aB) : Triangle(sa, sb, sa, aA, aB, aA)
    {
        setName("Равнобедренный треугольник");
    }
};

// Равносторонний треугольник
class EquilateralTriangle : public Triangle
{
protected:
    bool Iscorrect()
    {
        if (Triangle::Iscorrect() && get_a() == get_b() && get_a() == get_c() && get_b() == get_c() && get_A() == 60 && get_B() == 60 && get_C() == 60)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    EquilateralTriangle(int sa) : Triangle(sa, sa, sa, 60, 60, 60)
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
protected:
    bool Iscorrect()
    {
        if (getSidesCount() == 4 && (get_A() + get_B() + get_C() + get_D()) == 360)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    Quadrangle(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD)
    {
        setName("Четырехугольник");
        setSidesCount(4);
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
protected:
    bool Iscorrect()
    {
        if (Quadrangle::Iscorrect() && get_a() == get_c() && get_b() == get_d() && get_A() == 90 && get_B() == 90 && get_C() == 90 && get_D() == 90)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    Rectangle(int sa, int sb) : Quadrangle(sa, sb, sa, sb, 90, 90, 90, 90)
    {
        setName("Прямоугольник");
    }
};

// Квадрат
class Square : public Rectangle
{
protected:
    bool Iscorrect()
    {
        if (Rectangle::Iscorrect() && get_a() == get_b() && get_c() == get_d())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    Square(int sa) : Rectangle(sa, sa)
    {
        setName("Квадрат");
    }
};

// Параллелограмм
class Parallelogramm : public Quadrangle
{
protected:
    bool Iscorrect()
    {
        if (Quadrangle::Iscorrect() && get_a() == get_c() && get_b() == get_d() && get_A() == get_C() && get_B() == get_D())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    Parallelogramm(int sa, int sb, int aA, int aB) : Quadrangle(sa, sb, sa, sb, aA, aB, aA, aB)
    {
        setName("Параллелограмм");
    }
};

// Ромб
class Romb : public Parallelogramm
{
protected:
    bool Iscorrect()
    {
        if (Parallelogramm::Iscorrect() && get_a() == get_b() && get_c() == get_d())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    Romb(int sa, int aA, int aB) : Parallelogramm(sa, sa, aA, aB)
    {
        setName("Ромб");
    }
};

void print_info(Figure *f)
{
    cout << f->getName() << ":\n";
    cout << f->correctState() << "\n";
    cout << "Количество сторон: " << f->getSidesCount();
    if (f->getSidesCount() > 0)
    {
        cout << "\nСтороны: " << f->outSides() << "\nУглы: " << f->outAngles();
    }
    cout << "\n";
}

int main(int argc, char **argv)
{
    Figure figure;

    Triangle triangle(10, 20, 30, 50, 60, 70);
    Rectangular rectangular(10, 20, 30, 50, 60);  // неправ
    Rectangular rectangular2(10, 20, 30, 50, 40); // прав
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80); // неправ
    // Quadrangle quadrangle(10,20,30,40, 50,130,100,80); // прав
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogramm parallelogramm(20, 30, 30, 40); // неправ
    // Parallelogramm parallelogramm(20,30,120,60); // прав
    Romb romb(30, 30, 40); // неправ

    Figure *p_figure = &figure;
    Figure *p_triangle = &triangle;

    Triangle *p_rectangular = &rectangular;
    Triangle *p_rectangular2 = &rectangular2;
    Triangle *p_isoscelesTriangle = &isoscelesTriangle;
    Triangle *p_equilateralTriangle = &equilateralTriangle;

    Figure *p_quadrangle = &quadrangle;
    Quadrangle *p_rectangle = &rectangle;
    Quadrangle *p_square = &square;
    Quadrangle *p_parallelogramm = &parallelogramm;
    Quadrangle *p_romb = &romb;

    // треугольники
    print_info(p_figure);
    cout << "\n";
    print_info(p_triangle);
    cout << "\n";
    print_info(p_rectangular);
    cout << "\n";
    print_info(p_rectangular2);
    cout << "\n";
    print_info(p_isoscelesTriangle);
    cout << "\n";
    print_info(p_equilateralTriangle);

    // прямоугольники
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