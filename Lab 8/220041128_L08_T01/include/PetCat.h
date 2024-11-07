#ifndef PETCAT_H
#define PETCAT_H
#include "Animal.h"
#include "Cat.h"
#include<iostream>
#include<string>

using namespace std;



class PetCat : public Cat
{
public:
    PetCat(string name, string habitat, int weight, int height,string petName);

    void make_sound() override;
    void displayInformation() override;




private:
    string petName;
};

#endif // PETCAT_H
