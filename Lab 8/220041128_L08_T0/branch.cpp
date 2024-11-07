#include "Vehicles.h"

void branch::introduce() {
    cout << "Introducing Managers:" << endl;
    for (int i = 0; i < 10; ++i) {
        manager[i].name();
    }

    cout << "Introducing Drivers:" << endl;
    for (int i = 0; i < 30; ++i) {
        d[i].name();
    }
}

void branch::perform_maintenance() {
    cout << "Performing maintenance on all vehicles:" << endl;

    for (int i = 0; i < 10; ++i) {
        m[i].maintenance();
        c[i].maintenance();
        t[i].maintenance();
        h[i].maintenance();
    }
}

