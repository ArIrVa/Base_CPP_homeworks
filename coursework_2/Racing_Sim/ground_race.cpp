#include "ground_race.h"

Ground_race::Ground_race()
{
    setName("����� ��� ��������� ����������. ");    
}
Ground_race::~Ground_race() {}

void Ground_race::print_list()
{
    cout << "\x1b[32m1. �������\x1b[0m\n";
    cout << "\x1b[32m2. �������-���������\x1b[0m\n";
    cout << "\x1b[32m3. �������\x1b[0m\n";
    cout << "\x1b[32m4. �������-���������\x1b[0m\n";
    cout << "\x1b[31m5. ���\x1b[0m\n";
    cout << "\x1b[31m6. �����\x1b[0m\n";
    cout << "\x1b[31m7. ����-������\x1b[0m\n";
    cout << "\x1b[33m0. ��������� �����������\x1b[0m\n";
}

