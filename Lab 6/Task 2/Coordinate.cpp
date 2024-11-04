#include "Coordinate.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Coordinate::Coordinate() : x(0), y(0) {}

Coordinate::Coordinate(float x1, float y1) : x(x1), y(y1) {}

Coordinate::~Coordinate() {}

float Coordinate::operator-(Coordinate c)
{
    return sqrt(pow(x - c.x, 2) + pow(y - c.y, 2));
}

float Coordinate::getDistance()
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

void Coordinate::move_x(float val)
{
    x += val;
}

void Coordinate::move_y(float val)
{
    y += val;
}

void Coordinate::move(float x_val, float y_val)
{
    x += x_val;
    y += y_val;
}

void Coordinate::display()
{
    cout << "Coordinate: (" << x << ", " << y << ")" << endl;
}

bool Coordinate::operator>(Coordinate c)
{
    return getDistance() > c.getDistance();
}

bool Coordinate::operator<(Coordinate c)
{
    return getDistance() < c.getDistance();
}

bool Coordinate::operator>=(Coordinate c)
{
    return getDistance() >= c.getDistance();
}

bool Coordinate::operator<=(Coordinate c)
{
    return getDistance() <= c.getDistance();
}

bool Coordinate::operator==(Coordinate c)
{
    return getDistance() == c.getDistance();
}

bool Coordinate::operator!=(Coordinate c)
{
    return getDistance() != c.getDistance();
}
