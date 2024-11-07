#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#include<iostream>
#include<string>

using namespace std;



class Cat: private Animal
{
    public:
         Cat(string name, string habitat, int weight, int height);
         virtual void make_sound() override;
         void displayInformation() override;




    protected:

    private:
};

#endif // CAT_H
