#include "Animal.h"
#include<iostream>
#include<string>

using namespace std;

Animal::Animal(string s1, string s2, string s3,int w, int h)
{
    nameOfAnimal=s1;
    habitat_area=s2;
    sound= s3;
    weight= w;
    height=h;
}

void Animal:: displayInformation()
{
    cout << "Animal Name: " << nameOfAnimal << endl;
    cout << "Habitat Area: " << habitat_area << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Sound: " << sound << endl;
}
void Animal::changeWeight(int w)
{
   weight=w;

}
void Animal::make_sound()
{
    cout<<sound<<endl;
}
