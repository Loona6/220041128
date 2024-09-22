#include <iostream>
using namespace std;

class Counter
{
private:
    int count;         
    int incrementStep;

public:
    
    Counter() : count(0), incrementStep(1) {}

    
    void setIncrementStep(int step)
    {
        incrementStep = step;
    }

   
    int getCount() const
    {
        return count;
    }

    
    void increment()
    {
        count += incrementStep;
    }

    void resetCount()
    {
        count = 0;
    }
};

int main()
{
    Counter c;

    c.setIncrementStep(5);                    
    c.increment();                             
    cout << "Count: " << c.getCount() << endl;

    c.increment();                             
    cout << "Count: " << c.getCount() << endl; 

    c.resetCount();                                        
    cout << "Count after reset: " << c.getCount() << endl; 

    return 0;
}
