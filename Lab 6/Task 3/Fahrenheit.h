#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H

class Celsius;
class Kelvin;

class Fahrenheit
{
private:
    float temperature;

public:
    Fahrenheit();
    Fahrenheit(float temp);
    void assign(float temp);
    void display() const;

    operator Celsius();
    operator Kelvin();
};

#endif // FAHRENHEIT_H

