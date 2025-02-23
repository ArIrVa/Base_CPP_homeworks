// класс Воздушная гонка

#ifndef AIR_RACE_H
#define AIR_RACE_H

#include <iostream>
#include <vector>
#include "race.h"

class Air_race : public Race
{
public:
   Air_race();
   ~Air_race();

   void print_list() override;
};

#endif // AIR_RACE_H