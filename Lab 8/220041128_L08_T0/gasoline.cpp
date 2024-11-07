#include "Vehicles.h"
#include<iostream>
#include<string>

using namespace std;

#include "Vehicles.h"

gasoline::gasoline(double d, string s)
    : Vehicles(" ", " ", d), fuel(d), type(s) {}
