#pragma once


class Counter
{
private:
    int count;

public:
    Counter() : count(1) {};
    Counter(int initialValue) : count(initialValue) {};
    void increment();
    void decrement();
    int get_value() const;

};
