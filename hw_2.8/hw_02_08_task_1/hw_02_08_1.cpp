// Задача 1. Простое исключение

#include <iostream>
#include <string>
#include <exception>

using namespace std;

class LengthException : public exception
{
public:
    const char *what() const throw()
    {
        return "Вы ввели слово запретной длины! До свидания";
    }
};

int function(string str, int forbidden_length)
{
    int ln{};

#ifdef __unix__
    std::locale::global(std::locale(""));
    ln = mbstowcs(NULL, str.c_str(), 0);
#elif defined _WIN32
    ln = str.length();
#endif

    if (ln == forbidden_length)
    {
        throw LengthException();
    }

    return ln;
}

int main()
{
    int length{};
    int result{};
    string word{};

    cout << "Введите запретную длину: ";
    cin >> length;

    while (true)
    {
        try
        {
            cout << "Введите слово: ";
            cin >> word;

            result = function(word, length);
            cout << "Длина слова " << '"' << word << '"' << " равна " << result << '\n';
        }
        catch (const LengthException &bad_length)
        {
            cout << bad_length.what() << '\n';
            break;
        }
    }

    return 0;
}
