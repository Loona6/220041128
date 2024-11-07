#include "Vehicles.h"
#include<iostream>
#include<string>

using namespace std;

electric::electric(double d, int m)
    : Vehicles(" ", " ", d), battery(d), minutes(m) {}

void electric::maintenance() {
    cout << "Electric vehicle - maintenance" << endl;
}
