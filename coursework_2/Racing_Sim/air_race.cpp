#include "air_race.h"
Air_race::Air_race()
{
    setName("����� ��� ���������� ����������. ");   
}
Air_race::~Air_race() {}

void Air_race::print_list()
{
    cout << "\x1b[31m1. �������\x1b[0m\n";
    cout << "\x1b[31m2. �������-���������\x1b[0m\n";
    cout << "\x1b[31m3. �������\x1b[0m\n";
    cout << "\x1b[31m4. �������-���������\x1b[0m\n";
    cout << "\x1b[32m5. ���\x1b[0m\n";
    cout << "\x1b[32m6. �����\x1b[0m\n";
    cout << "\x1b[32m7. ����-������\x1b[0m\n";
    cout << "\x1b[33m0. ��������� �����������\x1b[0m\n";
}

