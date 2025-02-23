#include "transportmeans.h"

TransportMeans::TransportMeans(unsigned int dist, Participant part)
{
    switch (part)
    {
    // �������� ���������
    case Participant::Camel:
    {
        name = "�������";
        speed = 10;
        time_motion = 30;

        setTimeRestC(dist);
        setTimeResultGr(dist);
    }
    break;
    case Participant::CamelHS:
    {
        name = "�������-���������";
        speed = 40;
        time_motion = 10;

        setTimeRestCHS(dist);
        setTimeResultGr(dist);
    }
    break;
    case Participant::Centaur:
    {
        name = "�������";
        speed = 15;
        time_motion = 8;

        setTimeRestCen(dist);
        setTimeResultGr(dist);
    }
    break;
    case Participant::BootsAT:
    {
        name = "�������-���������";
        speed = 6;
        time_motion = 60;

        setTimeRestBt(dist);
        setTimeResultGr(dist);
    }
    break;

    // ��������� ���������
    case Participant::Eagle:
    {
        name = "���";
        speed = 8;

        setReductRatioE(dist);
        setTimeResultAir(dist);
    }
    break;
    case Participant::Broom:
    {
        name = "�����";
        speed = 20;

        setReductRatioB(dist);
        setTimeResultAir(dist);
    }
    break;
    case Participant::MagicCarpet:
    {
        name = "����-������";
        speed = 10;

        setReductRatioMC(dist);
        setTimeResultAir(dist);
    }
    break;

    default:
        break;
    }
}
TransportMeans::~TransportMeans() {}

std::string TransportMeans::getName() { return name; }

void TransportMeans::setTimeRestC(unsigned int dist)
{
    unsigned int q_timeout = (dist / speed / time_motion); // ���������� ��������� �� �����
    if (q_timeout == 1)
    {
        time_rest = 5; // ������������ ������ � ������ ���
    }
    else if (q_timeout > 1) // ������������ ������ � ����������� ����
    {
        time_rest = 5 + (q_timeout - 1) * 8;
    }
}
void TransportMeans::setTimeRestCHS(unsigned int dist)
{
    unsigned int q_timeout = (dist / speed / time_motion);
    if (q_timeout == 1)
    {
        time_rest = 5; // ������������ ������ � ������ ���
    }
    else if (q_timeout == 2)
    {
        time_rest = 5 + 6.5; // ������������ ������ �� ������ ���
    }
    else if (q_timeout > 2)
    {
        time_rest = 5 + 6.5 + (q_timeout - 2) * 8; // ������������ ������ � ����������� ����
    }
}
void TransportMeans::setTimeRestCen(unsigned int dist)
{
    unsigned int q_timeout = (dist / speed / time_motion);
    if (q_timeout == 1)
    {
        time_rest = 2; // ������������ ������ � ������ ���
    }
    else if (q_timeout > 1) // ������������ ������ � ����������� ����
    {
        time_rest = 2 + (q_timeout - 1) * 2;
    }
}
void TransportMeans::setTimeRestBt(unsigned int dist)
{
    unsigned int q_timeout = (dist / speed / time_motion);
    if (q_timeout == 1)
    {
        time_rest = 10; // ������������ ������ � ������ ���
    }
    else if (q_timeout > 1)
    {
        time_rest = 10 + (q_timeout - 1) * 5; // ������������ ������ � ����������� ����
    }
}
double TransportMeans::getTimeRest() { return time_rest; }

void TransportMeans::setReductRatioE(unsigned int dist)
{
    reduct_ratio = 0.94;
}
void TransportMeans::setReductRatioB(unsigned int dist)
{
    reduct_ratio = 1 - static_cast<double>(dist / 1000) / 100;
}
void TransportMeans::setReductRatioMC(unsigned int dist)
{
    if (dist < 1000)
    {
        reduct_ratio = 1;
    }
    else if (dist < 5000)
    {
        reduct_ratio = 0.97;
    }
    else if (dist < 10000)
    {
        reduct_ratio = 0.9;
    }
    else if (dist >= 10000)
    {
        reduct_ratio = 0.95;
    }
}
double TransportMeans::getReductRatio()
{
    return reduct_ratio;
}

void TransportMeans::setTimeResultGr(unsigned int dist)
{
    time_result = (static_cast<double>(dist) / speed) + time_rest;
}
void TransportMeans::setTimeResultAir(unsigned int dist)
{
    time_result = (static_cast<double>(dist) * reduct_ratio) / speed;
}
double TransportMeans::getTimeResult() { return time_result; }
