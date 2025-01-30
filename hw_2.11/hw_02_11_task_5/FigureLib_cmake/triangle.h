// #pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

// ����� �����������
class Triangle : public Figure
{
private:
    int a{}; // ������� a
    int b{}; // ������� b
    int c{}; // ������� c
    int A{}; // ���� A
    int B{}; // ���� B
    int C{}; // ���� C

public:
    Triangle(int sa, int sb, int sc, int aA, int aB, int aC);

    // ������� � ��������� ������������
    /* FIGURELIBDYNAMIC_API int get_a();
     FIGURELIBDYNAMIC_API int get_b();
     FIGURELIBDYNAMIC_API int get_c();
     FIGURELIBDYNAMIC_API int get_A();
     FIGURELIBDYNAMIC_API int get_B();
     FIGURELIBDYNAMIC_API int get_C();

     FIGURELIBDYNAMIC_API std::string outSides() override;
     FIGURELIBDYNAMIC_API std::string outAngles() override;*/
    int get_a();
    int get_b();
    int get_c();
    int get_A();
    int get_B();
    int get_C();

    std::string outSides() override;
    std::string outAngles() override;
};

#endif // TRIANGLE_H
