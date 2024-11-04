#ifndef CELSIUS_H
#define CELSIUS_H
class Fahrenheit;
class Kelvin;

class Celsius
{
private:
    float temperature;

public:
    Celsius();
    Celsius(float temp);
    void assign(float temp);
    void display() const;

    operator Fahrenheit();
    operator Kelvin();
};

#endif // CELSIUS_H
