#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include<string>
using namespace std;


class Animal
{
    public:
        Animal(string s1,string s2,string s3,int w, int h);
        virtual void displayInformation();
        virtual void changeWeight(int w);
        virtual void make_sound();





    protected:
        string nameOfAnimal;
        string habitat_area;
        string sound;
        int weight;
        int height;


    private:
};

#endif // ANIMAL_H
