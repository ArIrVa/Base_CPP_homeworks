#pragma once
#include "figure.h"

// ����� ���������������
class Quadrangle : public Figure
{
private:
    int a{}; // ������� a
    int b{}; // ������� b
    int c{}; // ������� c
    int d{}; // ������� d
    int A{}; // ���� A
    int B{}; // ���� B
    int C{}; // ���� C
    int D{}; // ���� D
public:
    Quadrangle(int sa, int sb, int sc, int sd, int aA, int aB, int aC, int aD);

    // ������� � ��������� ����������������
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();

    std::string outSides() override;
    std::string outAngles() override;
};