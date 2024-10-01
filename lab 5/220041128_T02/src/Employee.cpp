#include "Employee.h"
#include<iostream>
#include<string>

using namespace std;

Employee::Employee()
{
    //ctor
}

Employee::~Employee()
{
    //dtor
}

void Employee::setname(string n)
{
    if(n.size()>2)
        name=n;
    else
        name="John Doe";
}

void Employee::setDOB(string dob)
{
    if(getAge(dob)>=18)
        DOB=dob;
    else
        DOB="1 JAN 2002";
}



void Employee::setsalary(double x)
{
    if(x>=10000 && x<=100000)
        salary=x;
    else
        salary=10000;
}

void Employee::setInfo(string name, string DOB, double salary)
{

    setname(name);
    setDOB(DOB);
    setsalary(salary);
}


void Employee::getInfo() const
{
    cout<<"Employee name: "<<getname()<<endl;
    cout<<"Employee date of birth: "<<getDOB()<<endl;
    cout<<"Employee salary: "<<getsalary()<<endl;
}

int Employee::getAge(string DOB) const
{
    int cur_y = 2024;
    int birth_y = stoi(DOB.substr(7,4));

    return cur_y-birth_y;
}

Employee Employee::compareAge(const Employee a) const
{
    Employee temp;
    if(a.getAge(a.getDOB())>temp.getAge(getDOB()))
        return a;
    else
        return temp;

}
