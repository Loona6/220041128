#include <iostream>
#include "Counter.h"

using namespace std;

int main()
{

    Counter c1,c2;

    c1.setIncrementStep(5);
    c2.setIncrementStep(3);
    c1.increment();
    c2.increment();
    cout<<c1.getCount()<<endl;
    cout<<c2.getCount()<<endl;

    Counter c3;
    c3.setIncrementStep(3);
    c3= c1+c2;

    cout<<c3.getCount()<<endl;



    if(c2.getStep()== c3.getStep())
    {
        c1= c2+c3;
    }
    else
    {
        cout<<"Increment not same of c2 and c3"<<endl;
    }

    cout<<c1.getCount()<<endl;

    if(c1>c2) cout<<"True"<<endl;
    if(c1<c2) cout<<"True"<<endl;
    if(c1>=c2)cout<<"True"<<endl;
    if(c1<=c2) cout<<"True"<<endl;
    if(c1==c2) cout<<"True"<<endl;
    if(c1!=c2) cout<<"True"<<endl;

    c1 += c2;

    cout<<c1.getCount()<<endl;

    c1++;
    ++c2;

    cout<<c1.getCount()<<endl;
    cout<<c2.getCount()<<endl;




    return 0;


}
