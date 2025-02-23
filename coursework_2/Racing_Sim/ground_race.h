// класс Наземная гонка

#ifndef GROUND_RACE_H
#define GROUND_RACE_H

#include <iostream>
#include <vector>
#include "race.h"

class Ground_race : public Race
{
public:
   Ground_race();
   ~Ground_race();
   
   void print_list() override;   
};

#endif // GROUND_RACE_H