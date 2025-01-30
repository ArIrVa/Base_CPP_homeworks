//#pragma once

#ifndef FIGURE_H
#define FIGURE_H


#include <string>

// ������������ �����
class Figure
{
private:
    std::string name{}; // ������������ ������
    int sides_count{};  // ���������� ������

protected:
    //void setName(std::string n);

public:
    Figure(); // ����������� ��� ���������
    std::string getName();
    void setName(std::string n);
    int getSidesCount();
    virtual std::string outSides();
    virtual std::string outAngles();
};

#endif // FIGURE_H