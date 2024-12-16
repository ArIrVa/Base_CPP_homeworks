// Задача 3. Вывод структуры

#include <iostream>
#include <string>

using namespace std;

struct Address
{
    string City{};
    string Street{};
    u_short House_number{};
    u_short  Apartment_number{};
    u_int Postcode{};
};

void print_Address(Address &addr);

int main()
{
    Address Address{};
    Address.City = "Москва";
    Address.Street = "Жукова";
    Address.House_number = 13;
    Address.Apartment_number = 9;
    Address.Postcode = 110513;

    print_Address(Address);

    return 0;
}

void print_Address(Address &addr)
{
    cout << "Город: " << addr.City << '\n';
    cout << "Улица: " << addr.Street << '\n';
    cout << "Номер дома: " << addr.House_number << '\n';
    cout << "Номер квартиры: " << addr.Apartment_number << '\n';
    cout << "Индекс: " << addr.Postcode << '\n';
}