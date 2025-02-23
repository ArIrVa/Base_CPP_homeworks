#include "race.h"

Race::Race()

{
    name = "����� ��� ��������� � ���������� ����������. ";
}
Race::~Race() {}

void Race::setName(string n) { name = n; }
string Race::getName() { return name; }
void Race::set_distance(unsigned int d) { distance = d; }
unsigned int Race::get_distance() { return distance; }

void Race::print_list()
{
    cout << "\x1b[32m1. �������\x1b[0m\n";
    cout << "\x1b[32m2. �������-���������\x1b[0m\n";
    cout << "\x1b[32m3. �������\x1b[0m\n";
    cout << "\x1b[32m4. �������-���������\x1b[0m\n";
    cout << "\x1b[32m5. ���\x1b[0m\n";
    cout << "\x1b[32m6. �����\x1b[0m\n";
    cout << "\x1b[32m7. ����-������\x1b[0m\n";
    cout << "\x1b[33m0. ��������� �����������\x1b[0m\n";
}

void Race::set_optionP()
{
    cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
    cin >> optionp;
}
unsigned short Race::get_optionP()
{
    return optionp;
}

// ����� ������ ������������������ ��
void Race::print_listRegPart(vector<TransportMeans *> list)
{
    cout << "������������������ ������������ ��������: ";

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

// ����� ���������� ����������� ���������
void Race::print_regPart(TransportMeans *partic, bool ex)
{
    if (ex == 0)
    {
        // cout << '\n';
        cout << partic->getName() << " ������� ���������������!\n";
    }
    else if (ex == 1)
    {
        // cout << '\n';
        cout << partic->getName() << " ��� ���������������!\n";
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
    cout << "���������� �����: \n";
    vector<TransportMeans *> data_sort = bubbleSort(data);

    for (unsigned int i{}; i < data_sort.size(); ++i)
    {
        cout << (i + 1) << ". " << data_sort.at(i)->getName() << ". �����: " << data_sort.at(i)->getTimeResult() << '\n';
    }
}
