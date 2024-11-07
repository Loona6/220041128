#include "Vehicles.h"

trucks::trucks(double c) : gasoline(0, "Unknown"), cargo(c) {}

void trucks::maintenance() {
    cout << "Truck - maintenance" << endl;
}
