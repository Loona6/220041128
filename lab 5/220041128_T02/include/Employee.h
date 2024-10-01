#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>



using namespace std;

class Employee
{
public:
    Employee();
    ~Employee();
    string getname() const
    {
        return name;
    }
    void  setname(string n);

    string getDOB() const
    {
        return DOB;
    }
    void setDOB(string dob);

    double getsalary() const
    {
        return salary;
    }
    void setsalary(double x);

    void setInfo(string name, string DOB, double salary);
    void getInfo() const;

    int getAge(string temp) const;
    Employee compareAge(const Employee a) const;


private:
    string name;
    string DOB;
    double salary;
};

#endif // EMPLOYEE_H
