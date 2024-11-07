#include "PetCat.h"
#include "Animal.h"
#include "Cat.h"
#include<iostream>
#include<string>

using namespace std;


PetCat::PetCat(string name, string habitat, int weight, int height, string petName)
    : Cat(name, habitat, weight, height), petName(petName){}



void PetCat::make_sound()
{
    cout << petName<<" ";
    Cat::make_sound();
}

void PetCat:: displayInformation()
{
    Cat::displayInformation();
}
