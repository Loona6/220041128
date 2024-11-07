#include "Vehicles.h"

int main() {

    branch branch1;


    cout << "Introducing all employees in branch1:" << endl;
    branch1.introduce();


    cout << "\nPerforming maintenance on all vehicles in branch1:" << endl;
    branch1.perform_maintenance();

    return 0;
}
