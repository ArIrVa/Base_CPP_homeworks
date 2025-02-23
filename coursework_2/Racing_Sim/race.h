// класс Race - родительский класс гонок

#ifndef RACE_H
#define RACE_H

#include <iostream>
#include <string>
#include <vector>

#include "transportmeans.h"

using namespace std;

class Race
{

public:
    Race();
    ~Race();

    string getName();
    void set_distance(unsigned int d);
    unsigned int get_distance();
    void set_optionP();
    unsigned short get_optionP();
    void print_listRegPart(vector<TransportMeans *> list);
    virtual void print_list();
    void print_regPart(TransportMeans *partic, bool ex);
    vector<TransportMeans *> bubbleSort(vector<TransportMeans *> result_list);
    void print_result(vector<TransportMeans *> data);

protected:
    void setName(std::string n);
    unsigned int distance{}; // дистанция

private:
    string name{};     // наименование гонки
    unsigned short optionp{}; // выбор участника гонки или окончания регистрации
};

#endif // RACE_H