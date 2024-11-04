#include <iostream>
#include "Celcius.h"
#include "Fahrenheit.h"
#include "Kelvin.h"

using namespace std;

int main()
{
    Celsius c1(25.0);
    Fahrenheit f1(77.0);
    Kelvin k1(298.15);

    c1.display();
    f1.display();
    k1.display();

    Fahrenheit f2 = c1;
    Kelvin k2 = c1;

    f2.display();
    k2.display();

    Celsius c2 = f1;
    Kelvin k3 = f1;

    c2.display();
    k3.display();

    Celsius c3 = k1;
    Fahrenheit f3 = k1;

    c3.display();
    f3.display();

    return 0;
}
