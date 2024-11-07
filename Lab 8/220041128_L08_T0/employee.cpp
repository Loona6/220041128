#include "Vehicles.h"

employee::employee(int ID, string n) : ID(ID), name(n) {}

void employee::name() {
    cout << "Employee Name: " << name << endl;
}
