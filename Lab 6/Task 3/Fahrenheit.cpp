#include "Fahrenheit.h"
#include "Celcius.h"
#include "Kelvin.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Fahrenheit::Fahrenheit() : temperature(32.0) {}

Fahrenheit::Fahrenheit(float temp)
{
    assign(temp);
}

void Fahrenheit::assign(float temp)
{
    if ((temp - 32) * 5.0 / 9.0 < -273.15)
    {
        cout<<"Temperature cannot be below absolute zero in Fahrenheit."<<endl;
    }
    else
        temperature = temp;
}

void Fahrenheit::display() const
{
    cout << "The temperature is " << temperature << " Fahrenheit." << endl;
}

Fahrenheit::operator Celsius()
{
    return Celsius((temperature - 32) * 5.0 / 9.0);
}

Fahrenheit::operator Kelvin()
{
    return Kelvin((temperature - 32) * 5.0 / 9.0 + 273.15);
}




