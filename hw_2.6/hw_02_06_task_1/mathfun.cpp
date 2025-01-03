#include "mathfun.h"

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int expo(int a, int b)
{
    int tmp = a;
    for (int i = 0; i < b; ++i)
    {
        tmp = tmp * a;
    }
    return tmp;
}