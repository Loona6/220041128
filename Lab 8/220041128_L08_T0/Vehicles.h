#ifndef VEHICLES_H
#define VEHICLES_H


#include<iostream>
#include<string>

using namespace std;


class Vechicles
{
public:

    Vehicles(string s, string s1, double d);

    virtual void maintenance();


protected:
    string license;
    string manufacturer;
    double size;



};

class gasoline: public Vehicles
{
public:

    gasoline(double d, string s);

protected:

    double fuel;
    string type;

};


class electric: public Vehicles
{
public:

    electric(double d, int m);
    void maintenance() override;


private:

    double battery;
    int minutes;


};

class motorcycles : public gasoline
{
public:
    void maintenance() override;
};

class cars: public gasoline
{
public:

    cars(int p);
    void maintenance() override;

private:
    int passangers;

};

class trucks : public gasoline
{
public:

    trucks(double c);
    void maintenance() override;

private:
    double cargo;

};

class hybrid: public gasoline, public electric
{
public:
    hybrid(double e);
    void maintenance() override;

private:
    double efficiency;

};

class employee
{
protected:

    int ID;
    string name;

public:

    employee(int ID, string n);

    virtual void name();





};


class Manager: public employee
{
public:
    void name override();
};


class driver : public employee
{
public:
    void name override();
};

class branch
{
private:
    motorcycles m[10];
    cars c[10];
    trucks t[10];
    hybrid h[10];
    Manager manager[10];
    driver d[30];

public:

    void introduce();
    void perform_maintenance();


};

#endif // VEHICLES_H
