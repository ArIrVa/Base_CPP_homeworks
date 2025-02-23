// классы перечисления участников и типов гонки  

#ifndef ENUM_CLASSES_H
#define ENUM_CLASSES_H

enum class Participant
{
    EndReg = 0,
    Camel = 1,
    CamelHS,
    Centaur,
    BootsAT,
    Eagle,
    Broom,
    MagicCarpet
};

enum class Type_race
{
    ground = 1,
    air,
    ground_air
};

#endif // ENUM_CLASSES_H