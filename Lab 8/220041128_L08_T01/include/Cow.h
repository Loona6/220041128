#ifndef COW_H
#define COW_H

#include "Animal.h"
#include<iostream>
#include<string>

using namespace std;



class Cow :public Animal
{
    public:
        Cow(string name, string habitat, int weight, int height, double milkProduction);

        void make_sound() override;
        double getMilkProduction() const;
        void displayInformation() override;


    private:
        double milkProductionInLiters;

};

#endif // COW_H
