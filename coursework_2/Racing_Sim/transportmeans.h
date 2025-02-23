// class TransportMeans - родительский класс транспортных средств

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

    ///  Ќаземный транспорт
    double getTimeRest();
    void setTimeRestC(unsigned int dist);
    void setTimeRestCHS(unsigned int dist);
    void setTimeRestCen(unsigned int dist);
    void setTimeRestBt(unsigned int dist);

    ///  ¬оздушный транспорт
    double getReductRatio();
    void setReductRatioE(unsigned int dist);
    void setReductRatioB(unsigned int dist);
    void setReductRatioMC(unsigned int dist);


    void setTimeResultGr(unsigned int dist);
    void setTimeResultAir(unsigned int dist);
    double getTimeResult();   

private:
    std::string name{};  // наименование транспортного средства
    unsigned int speed{};       // скорость
    unsigned int time_motion{}; // врем€ движени€ до отдыха
    double time_rest{};  // длительность отдыха
    double reduct_ratio{}; // коэффициент сокращени€ рассто€ни€
    double time_result{}; // итоговое врем€ прохождени€ дистанции
};

#endif // TRANSPORTMEANS_H