#include <iostream>
#include <string>
using namespace std;
#ifndef DRIVER_H
#define DRIVER_H

#include "Vehicle.h"

class Driver {
private:
    string name;
    Vehicle* assignedVehicle;

public:
    Driver(string n, Vehicle* v);
    void showDriver() const;
};

#endif