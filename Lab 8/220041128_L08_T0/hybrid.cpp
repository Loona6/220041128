#include "Vehicles.h"

hybrid::hybrid(double e) : gasoline(0, "Unknown"), electric(0, 0), efficiency(e) {}

void hybrid::maintenance() {
    cout << "Hybrid vehicle - maintenance" << endl;
}
