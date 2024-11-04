#include "Counter.h"
#include<iostream>

using namespace std;

Counter::Counter()
{
    count=0;
    incrementStep=1;
}

Counter::Counter(int val)
{
    count=val;
}

void Counter::setIncrementStep(int step)
{
    if(count==0)
    {
        if(step>=0)
            incrementStep = step;
    }

    else
    {
        cout<<"Cannot set increment step"<<endl;
    }


}


int Counter::getCount() const
{
    return count;
}

int Counter::getStep() const
{
    return incrementStep;
}


void Counter:: increment()
{
    count += incrementStep;
}

void Counter:: resetCount()
{
    count = 0;
}

void Counter:: add(int value)
{
    count += value;
}

Counter Counter:: operator +(Counter obj)
{

    return Counter(getCount()+ obj.getCount());
}

bool Counter:: operator>(Counter obj)
{
    int n= getCount();
    if(n> obj.getCount())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Counter:: operator<(Counter obj)
{
    int n= getCount();
    if(n<obj.getCount())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Counter:: operator>=(Counter obj)
{
    int n= getCount();
    if(n>=obj.getCount())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Counter:: operator<=(Counter obj)
{
    int n= getCount();
    if(n<=obj.getCount())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Counter:: operator==(Counter obj)
{
    int n= getCount();
    if(n==obj.getCount())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Counter:: operator!=(Counter obj)
{
    int n= getCount();
    if(n!=obj.getCount())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Counter:: operator += (Counter obj)
{
    add(obj.getCount());
}

void Counter:: operator ++ ()
{
    count++;

}

void Counter::operator ++ (int)
{
    count++;

}


