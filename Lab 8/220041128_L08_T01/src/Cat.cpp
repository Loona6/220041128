#include "Cat.h"
#include "Animal.h"
#include<iostream>
#include<string>

using namespace std;

Cat::Cat(string name, string habitat, int weight, int height)
    : Animal(name, habitat, "meow", weight, height) {}

void Cat:: make_sound()
{
    cout << "The cat says: ";
    Animal::make_sound();
}

void Cat:: displayInformation()
{
    Animal::displayInformation();
}

