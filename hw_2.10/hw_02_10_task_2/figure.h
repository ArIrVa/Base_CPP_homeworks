#pragma once
#include <string>

// ������������ �����
class Figure
{
private:
    std::string name{}; // ������������ ������
    int sides_count{};  // ���������� ������

protected:
    void setName(std::string n);

public:
    Figure(); // ����������� ��� ���������
    std::string getName();
    int getSidesCount();
    virtual std::string outSides();
    virtual std::string outAngles();
};