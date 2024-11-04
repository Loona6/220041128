#include "Celcius.h"
#include "Fahrenheit.h"
#include "Kelvin.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Celsius::Celsius() : temperature(0.0) {}

Celsius::Celsius(float temp)
{
    assign(temp);
}

void Celsius::assign(float temp)
{
    if (temp < -273.15)
    {
        cout<<"Temperature cannot be below absolute zero in Celsius."<<endl;

    }
    else
        temperature = temp;
}

void Celsius::display() const
{
    cout << "The temperature is " << temperature << " Celsius." << endl;
}

Celsius::operator Fahrenheit()
{
    return Fahrenheit((temperature * 9.0 / 5.0) + 32);
}

Celsius::operator Kelvin()
{
    return Kelvin(temperature + 273.15);
}


