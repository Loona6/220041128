#include "Cow.h"
#include "Animal.h"
#include<iostream>
#include<string>

using namespace std;

Cow::Cow(string name, string habitat, int weight, int height, double milkProduction)
    : Animal(name, habitat, "moo", weight, height), milkProductionInLiters(milkProduction) {}

void Cow:: make_sound()
{
    cout << "The cow says: ";
    Animal::make_sound();
}



double Cow:: getMilkProduction() const
{
    return milkProductionInLiters;
}

void Cow:: displayInformation()
{
    Animal::displayInformation();
}

