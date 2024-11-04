#include "Kelvin.h"
#include "Celcius.h"
#include "Fahrenheit.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Kelvin::Kelvin() : temperature(273.15) {}

Kelvin::Kelvin(float temp)
{
    assign(temp);
}

void Kelvin::assign(float temp)
{
    if (temp < 0)
    {
        cout<<"Temperature cannot be below absolute zero in Kelvin."<<endl;
    }
    else
        temperature = temp;
}

void Kelvin::display() const
{
    cout << "The temperature is " << temperature << " Kelvin." << endl;
}

Kelvin::operator Celsius()
{
    return Celsius(temperature - 273.15);
}

Kelvin::operator Fahrenheit()
{
    return Fahrenheit((temperature - 273.15) * 9.0 / 5.0 + 32);
}


