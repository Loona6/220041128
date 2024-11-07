#include "Vechicles.h"

#include<iostream>
#include<string>

using namespace std;

Vehicles::Vehicles(string s, string s1, double d)
{
    license=s;
    manufacturer=s1;
    size=d;
}

void Vehicles:: maintenance()
{
    cout<<"Maintenance called"<<endl;
}
