#include <iostream>
#include <string>
using namespace std;
#include "driver.h"

Driver::Driver(string n, Vehicle* v) : name(n), assignedVehicle(v) {}

string Driver::showDriver() const {
    return "Driver: " + name + "\nAssigned to:\n" + assignedVehicle->getInfo();
}