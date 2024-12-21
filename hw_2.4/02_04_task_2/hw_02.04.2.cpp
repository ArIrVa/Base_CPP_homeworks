// Задача 2. Сортируем адреса

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Address
{
private:
    string city{};
    string street{};
    string house_number{};
    string apartment_number{};

public:
    Address(string _city, string _street, string _house_number, string _apartment_number) // конструктор с параметрами
    {
        city = _city;
        street = _street;
        house_number = _house_number;
        apartment_number = _apartment_number;
    }

    Address() {}
    ~Address() {};

    void set_city(string _city)
    {
        city = _city;
    }
    void set_street(string _street)
    {
        street = _street;
    }
    void set_house_number(string _house_number)
    {
        house_number = _house_number;
    }
    void set_apartment_number(string _apartment_number)
    {
        apartment_number = _apartment_number;
    }

    string get_city()
    {
        return city;
    }
    string get_outaddress() // сформированная строка для вывода в файл
    {
        return city + ", " + street + ", " + house_number + ", " + apartment_number;
    }
};

int main()
{
    int N{}; // количество адресов

    // чтение из файла
    ifstream infile("in.txt");
    if (infile.is_open())
    {
        infile >> N;
        Address **list_address = new Address *[N]; // выделение памяти по массив указателей
        string _city{};
        string _street{};
        string _hn{};
        string _an{};

        for (int i{}; i < N; ++i)
        {
            list_address[i] = new Address(); // выделение памяти для объекта класса
            infile >> _city >> _street >> _hn >> _an;

            list_address[i]->set_city(_city);
            list_address[i]->set_street(_street);
            list_address[i]->set_house_number(_hn);
            list_address[i]->set_apartment_number(_an);
        }
        infile.close();

        // сортировка пузырьком
        bool swapped = false;
        do
        {
            swapped = false;
            for (int i = 1; i < N; ++i)
            {
                if (list_address[i - 1]->get_city() > list_address[i]->get_city()) // по городу
                {
                    Address *tmp = list_address[i - 1];
                    list_address[i - 1] = list_address[i];
                    list_address[i] = tmp;
                    swapped = true;
                }
            }
        } while (swapped);

        // запись в файл
        ofstream outfile("out.txt");
        outfile << N << '\n';

        {
            for (int i = 0; i < N; ++i) // вывод адресов в отсортированном порядке
            {
                outfile << list_address[i]->get_outaddress() << '\n';
            }
        }
        outfile.close();

        for (int i = 0; i < N; ++i)
        {
            delete list_address[i]; // освобождение памяти, выделенной под объекты
        }

        delete[] list_address; // освобождение  памяти под массив объектов
    }
    else
    {
        cout << "Не удалось открыть файл! \n";
    }

    return 0;
}
