// class TransportMeans - ������������ ����� ������������ �������

#ifndef TRANSPORTMEANS_H
#define TRANSPORTMEANS_H

#include <string>
#include "enum_classes.h"

class TransportMeans
{
public:
    TransportMeans(unsigned int dist, Participant part);
    ~TransportMeans();

    std::string getName();    

    ///  �������� ���������
    double getTimeRest();
    void setTimeRestC(unsigned int dist);
    void setTimeRestCHS(unsigned int dist);
    void setTimeRestCen(unsigned int dist);
    void setTimeRestBt(unsigned int dist);

    ///  ��������� ���������
    double getReductRatio();
    void setReductRatioE(unsigned int dist);
    void setReductRatioB(unsigned int dist);
    void setReductRatioMC(unsigned int dist);


    void setTimeResultGr(unsigned int dist);
    void setTimeResultAir(unsigned int dist);
    double getTimeResult();   

private:
    std::string name{};  // ������������ ������������� ��������
    unsigned int speed{};       // ��������
    unsigned int time_motion{}; // ����� �������� �� ������
    double time_rest{};  // ������������ ������
    double reduct_ratio{}; // ����������� ���������� ����������
    double time_result{}; // �������� ����� ����������� ���������
};

#endif // TRANSPORTMEANS_H