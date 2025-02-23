#include "ground_race.h"

Ground_race::Ground_race()
{
    setName("Гонка для наземного транспорта. ");    
}
Ground_race::~Ground_race() {}

void Ground_race::print_list()
{
    cout << "\x1b[32m1. Верблюд\x1b[0m\n";
    cout << "\x1b[32m2. Верблюд-быстроход\x1b[0m\n";
    cout << "\x1b[32m3. Кентавр\x1b[0m\n";
    cout << "\x1b[32m4. Ботинки-вездеходы\x1b[0m\n";
    cout << "\x1b[31m5. Орёл\x1b[0m\n";
    cout << "\x1b[31m6. Метла\x1b[0m\n";
    cout << "\x1b[31m7. Ковёр-самолёт\x1b[0m\n";
    cout << "\x1b[33m0. Закончить регистрацию\x1b[0m\n";
}

