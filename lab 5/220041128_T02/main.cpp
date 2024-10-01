#include <iostream>
#include "Employee.h"
#include<string>



using namespace std;

int main()
{

    Employee e1,e2;
    e1.setInfo("Maisha Sanjida","6 Jun 2004",50000);
    e1.getInfo();
    e2.setInfo("Iqura Alam","7 Nov 2003",70000);
    e2.getInfo();

    Employee e3= e1.compareAge(e2);
    e3.getInfo();




}
