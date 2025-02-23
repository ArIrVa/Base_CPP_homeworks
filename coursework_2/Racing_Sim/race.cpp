#include "race.h"

Race::Race()

{
    name = "Гонка для наземного и воздушного транспорта. ";
}
Race::~Race() {}

void Race::setName(string n) { name = n; }
string Race::getName() { return name; }
void Race::set_distance(unsigned int d) { distance = d; }
unsigned int Race::get_distance() { return distance; }

void Race::print_list()
{
    cout << "\x1b[32m1. Верблюд\x1b[0m\n";
    cout << "\x1b[32m2. Верблюд-быстроход\x1b[0m\n";
    cout << "\x1b[32m3. Кентавр\x1b[0m\n";
    cout << "\x1b[32m4. Ботинки-вездеходы\x1b[0m\n";
    cout << "\x1b[32m5. Орёл\x1b[0m\n";
    cout << "\x1b[32m6. Метла\x1b[0m\n";
    cout << "\x1b[32m7. Ковёр-самолёт\x1b[0m\n";
    cout << "\x1b[33m0. Закончить регистрацию\x1b[0m\n";
}

void Race::set_optionP()
{
    cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
    cin >> optionp;
}
unsigned short Race::get_optionP()
{
    return optionp;
}

// вывод списка зарегистрированных ТС
void Race::print_listRegPart(vector<TransportMeans *> list)
{
    cout << "Зарегистрированные транспортные средства: ";

    for (int i{}; i < list.size(); ++i)
    {
        if (i > 0)
        {
            cout << ", " << list.at(i)->getName();
        }
        else
        {
            cout << list.at(i)->getName();
        }
    }
    cout << '\n';
}

// вывод результата регистрации участника
void Race::print_regPart(TransportMeans *partic, bool ex)
{
    if (ex == 0)
    {
        // cout << '\n';
        cout << partic->getName() << " успешно зарегистрирован!\n";
    }
    else if (ex == 1)
    {
        // cout << '\n';
        cout << partic->getName() << " уже зарегистрирован!\n";
    }
}

vector<TransportMeans *> Race::bubbleSort(vector<TransportMeans *> result_list)
{
    bool swapped = false;
    do
    {
        swapped = false;
        for (unsigned int i = 1; i < result_list.size(); ++i)
        {
            if (result_list.at(i - 1)->getTimeResult() > result_list.at(i)->getTimeResult())
            {
                TransportMeans *ptr_temp = result_list.at(i - 1);
                result_list.at(i - 1) = result_list.at(i);
                result_list.at(i) = ptr_temp;
                swapped = true;
            }
        }
    } while (swapped);
    return result_list;
}

void Race::print_result(vector<TransportMeans *> data)
{
    cout << "Результаты гонки: \n";
    vector<TransportMeans *> data_sort = bubbleSort(data);

    for (unsigned int i{}; i < data_sort.size(); ++i)
    {
        cout << (i + 1) << ". " << data_sort.at(i)->getName() << ". Время: " << data_sort.at(i)->getTimeResult() << '\n';
    }
}
