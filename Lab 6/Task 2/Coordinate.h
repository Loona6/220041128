#ifndef COORDINATE_H
#define COORDINATE_H

#include <cmath>
#include<iostream>

using namespace std;

class Coordinate
{
public:
    Coordinate();
    Coordinate(float x1, float y1);
    ~Coordinate();
    float operator-(Coordinate c);
    float getDistance();
    void move_x(float val);
    void move_y(float val);
    void move(float x_val, float y_val);
    void display();
    bool operator>(Coordinate c);
    bool operator<(Coordinate c);
    bool operator>=(Coordinate c);
    bool operator<=(Coordinate c);
    bool operator==(Coordinate c);
    bool operator!=(Coordinate c);

private:
    float x;
    float y;
};

#endif // COORDINATE_H

