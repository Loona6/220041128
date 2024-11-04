#ifndef COUNTER_H
#define COUNTER_H

#include<iostream>
using namespace std;

class Counter
{
private:
    int count;
    int incrementStep;

public:

    Counter();
    Counter(int val);
    void setIncrementStep(int step);
    int getCount() const;
    int getStep() const;
    void increment();
    void resetCount();
    Counter operator+(Counter obj);
    bool operator>(Counter obj);
    bool operator<(Counter obj);
    bool operator>=(Counter obj);
    bool operator<=(Counter obj);
    bool operator==(Counter obj);
    bool operator!=(Counter obj);
    void operator+=(Counter obj);
    void operator++();
    void operator++(int);

    void add(int value);




};


#endif // COUNTER_H
