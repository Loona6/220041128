#ifndef KELVIN_H
#define KELVIN_H

class Celsius;
class Fahrenheit;

class Kelvin
{
private:
    float temperature;

public:
    Kelvin();
    Kelvin(float temp);
    void assign(float temp);
    void display() const;

    operator Celsius();
    operator Fahrenheit();
};

#endif // KELVIN_H

