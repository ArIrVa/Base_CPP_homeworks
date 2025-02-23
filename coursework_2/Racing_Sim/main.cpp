// основной файл проекта

#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <clocale>

#include "race.h"
#include "ground_race.h"
#include "air_race.h"
#include "transportmeans.h"
#include "registration.h"
#include "enum_classes.h"

using namespace std;

int main(int argc, char *argv[])
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");	
	
    unsigned short typeR{};  // тип гонки
    unsigned short option{}; // выбор действия
    unsigned int distance{};
    bool reuse{false};       // флаг повторного использования функции registration()
    Participant participant{};

    Race *race = nullptr;

    cout << '\n';
    cout << " \x1b[33m--------         ...../\\... --------  ------ \x1b[0m \n";
    cout << " \x1b[33m------------   ....../--\\...  -------- \x1b[0m \n";
    cout << " \x1b[33m--------      ______/----\\______   ------- \x1b[0m \n";
    cout << " \x1b[33m-----------    --  ___*___  --     --------- \x1b[0m \n";
    cout << " \x1b[33m------------    -- |_____| --   ------- \x1b[0m \n";
    cout << " \x1b[33m--------          /__/-\\__\\     ---------- \x1b[0m \n";
    cout << " \x1b[33m-----------      /../   \\..\\   ------ \x1b[0m \n";
    cout << " \x1b[33m---------       /.-       -.\\  -------  -----\x1b[0m \n";

    while (option != 10)
    {
        cout << "\nДобро пожаловать в гоночный симулятор!\n\n";
        cout << "===============================================\n";
        cout << "\x1b[33m1. Гонка для наземного транспорта\x1b[0m\n";
        cout << "\x1b[33m2. Гонка для воздушного транспорта\x1b[0m\n";
        cout << "\x1b[33m3. Гонка для наземного и воздушного транспорта\x1b[0m\n";
        cout << "===============================================\n\n";
        cout << "Выберите тип гонки: ";

        cin >> typeR;
        Type_race typeRace = static_cast<Type_race>(typeR);

        cout << "Укажите длину дистанции (должна быть положительна): ";
        cin >> distance;
        cout << '\n';

        vector<TransportMeans *> transport_list = registration(typeRace, distance, reuse);

        while (option != 2)
        {
            cout << "\x1b[33m1. Зарегистрировать транспорт\x1b[0m\n";
            cout << "\x1b[33m2. Начать гонку\x1b[0m\n";
            cout << "Выберите действие: ";
            cin >> option;
            cout << '\n';

            if (option == 1)
            {
                reuse = true;
                transport_list = registration(typeRace, distance, reuse);
            }
        }

        if (option == 2)
        {
            race->print_result(transport_list);
        }

        cout << "\n\x1b[33m1. Провести еще одну гонку\x1b[0m\n";
        cout << "\x1b[33m2. Выйти\x1b[0m\n";
        cout << "Выберите действие: ";
        cin >> option;
        cout << '\n';

        if (option == 1)
        {
            reuse = false;
        }
        if (option == 2)
        {
            option = 10;
        }
    }

    return 0;
}
