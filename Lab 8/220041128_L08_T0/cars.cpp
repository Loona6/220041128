#include "Vehicles.h"

cars::cars(int p) : gasoline(0, " "), passangers(p) {}

void cars::maintenance() {
    cout << "Car - maintenance" << endl;
}
