#include "air_race.h"
Air_race::Air_race()
{
    setName("Гонка для воздушного транспорта. ");   
}
Air_race::~Air_race() {}

void Air_race::print_list()
{
    cout << "\x1b[31m1. Верблюд\x1b[0m\n";
    cout << "\x1b[31m2. Верблюд-быстроход\x1b[0m\n";
    cout << "\x1b[31m3. Кентавр\x1b[0m\n";
    cout << "\x1b[31m4. Ботинки-вездеходы\x1b[0m\n";
    cout << "\x1b[32m5. Орёл\x1b[0m\n";
    cout << "\x1b[32m6. Метла\x1b[0m\n";
    cout << "\x1b[32m7. Ковёр-самолёт\x1b[0m\n";
    cout << "\x1b[33m0. Закончить регистрацию\x1b[0m\n";
}

