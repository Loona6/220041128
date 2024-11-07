#include <iostream>
#include<string>
#include "Animal.h"
#include "Cow.h"
#include "Chicken.h"
#include "Cat.h"
#include "PetCat.h"



using namespace std;

int main()
{
    Cow cow("goru", "Farm", 600, 150, 10.5);
    cow.displayInformation();
    cow.make_sound();
    cout << "Daily Milk Production: " << cow.getMilkProduction() << " liters" << endl;

    cout << endl;

    Chicken chicken("murgi", "khamar", 3, 40, 2);
    chicken.displayInformation();
    chicken.make_sound();
    cout << "Daily Egg Count: " << chicken.getEggCount() << endl;

    cout<<endl;

    Cat cat("billu","park",15,24);
    cat.make_sound();
    cat.displayInformation();

    cout << endl;

    PetCat pet("catto","Home",20,13,"Chintubabu");
    pet.make_sound();
    pet.displayInformation();

    return 0;
}
