//#pragma once

#ifndef FIGURE_H
#define FIGURE_H

#ifdef FIGURELIBDYNAMIC_EXPORTS
#define FIGURELIBDYNAMIC_API __declspec(dllexport)
#else
#define FIGURELIBDYNAMIC_API __declspec(dllimport)
#endif

#include <string>



// ������������ �����
class FIGURELIBDYNAMIC_API Figure
{
private:
    std::string name{}; // ������������ ������
    int sides_count{};  // ���������� ������

protected:
    void setName(std::string n);

public:
    Figure(); // ����������� ��� ���������
    std::string getName();
    // void setName(std::string n);
    int getSidesCount();
    virtual std::string outSides();
    virtual std::string outAngles();
};

#endif // FIGURE_H