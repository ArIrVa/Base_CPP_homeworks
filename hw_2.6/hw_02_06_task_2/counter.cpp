#include "counter.h"

Counter::Counter(int counter) {}
Counter::Counter() { counter = 1; }
Counter::~Counter() {}

void Counter::set_counter(int _counter)
{
    counter = _counter;
}

int Counter::get_counter()
{
    return counter;
}

int Counter::increase()
{
    return counter++;
}

int Counter::lessen()
{
    return counter--;
}

void Counter::processing(char ch)
{
    if (ch == '+')
    {
        increase();
    }
    else if (ch == '-')
    {
        lessen();
    }
}