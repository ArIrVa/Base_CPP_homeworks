#pragma once
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
    int get_a();
    int get_b();
    int get_c();
    int get_A();
    int get_B();
    int get_C();

    std::string outSides() override;
    std::string outAngles() override;
};