#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Coordinate.h"

using namespace std;

void randomAssignment(Coordinate c[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        float x = static_cast<float>(rand() % 101);
        float y = static_cast<float>(rand() % 101);
        c[i] = Coordinate(x, y);
    }
}

void sort(Coordinate c[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (c[j].getDistance() > c[j + 1].getDistance())
            {
                Coordinate temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
}

int main()
{
    Coordinate coord[10];
    randomAssignment(coord, 10);
    sort(coord, 10);
    for (int i = 0; i < 10; i++)
    {
        coord[i].display();
    }
    Coordinate c1(3.0, 4.0);
    Coordinate c2(1.0, 1.0);
    Coordinate c3(-2.0, -2.0);

    c1.display();
    c2.display();
    c3.display();

    float distance = c1 - c2;
    cout << "Distance between c1 and c2: " << distance << endl;

    float distance1 = c3.getDistance();
    cout << "Distance from origin for c3: " << distance1 << endl;
    return 0;
}
