#ifndef CHICKEN_H
#define CHICKEN_H

#include "Animal.h"
#include<iostream>
#include<string>

using namespace std;



class Chicken: protected Animal
{
public:
    Chicken(string name, string habitat, int weight, int height, int dailyEggCount);
    void make_sound() override;
    int getEggCount();
    void displayInformation() override;




private:
    int dailyEggCount;
};

#endif // CHICKEN_H
