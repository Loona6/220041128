#include "Chicken.h"
#include "Animal.h"
#include<iostream>
#include<string>

using namespace std;


Chicken::Chicken(string name, string habitat, int weight, int height, int dailyEggCount)
    : Animal(name, habitat, "buck buck", weight, height), dailyEggCount(dailyEggCount) {}

void Chicken:: make_sound()
{
    cout << "The chicken says: ";
    Animal::make_sound();
}
int Chicken:: getEggCount()
{
    return dailyEggCount;
}

void Chicken:: displayInformation()
{
    Animal::displayInformation();
}
