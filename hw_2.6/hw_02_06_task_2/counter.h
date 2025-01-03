#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
private:
    int counter{};

public:
    Counter(); // конструктор без параметра
    Counter(int _counter); // конструктор с параметром  
    ~Counter();

    // сеттер
    void set_counter(int _counter);
    // геттер
    int get_counter();
    // увеличение счетчика
    int increase();
    // уменьшение счетчика
    int lessen();
    // обработка команд увеличения/уменьшения счетчика
    void processing(char ch);
};

#endif // COUNTER_H