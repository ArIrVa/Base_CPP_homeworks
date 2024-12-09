// Задача 2. Счета

#include <iostream>
#include <string>

using namespace std;

struct Client_account
{
    u_int Account_number{};
    string Name{};
    double Current_amount{};
};

double change_balance(Client_account &Account, double amount);

int main()
{
    Client_account Person{};
    double new_amount{};

    cout << "Введите номер счёта: ";
    cin >> Person.Account_number;
    // cout << '\n';
    cout << "Введите имя владельца: ";
    getline(cin >> ws, Person.Name);
    // cout << '\n';
    cout << "Введите баланс: ";
    cin >> Person.Current_amount;
    // cout << '\n';
    cout << "Введите новый баланс: ";
    cin >> new_amount;
    // cout << '\n';

    change_balance(Person, new_amount);
    cout << "Ваш счёт: " << Person.Name << ", " << Person.Account_number << ", " << Person.Current_amount << '\n';

    return 0;
}

double change_balance(Client_account &Account, double amount)
{
    Account.Current_amount = amount;
    return Account.Current_amount;
}