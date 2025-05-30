#include "vehicle.h"
#include <iostream>
#include <string>
using namespace std;
#include <iostream>

Vehicle::Vehicle(string b, string m, int y, string lastDate, string status)
    : brand(b), model(m), year(y) {
    maintenance = new Maintenance(lastDate, status);
}

Vehicle::~Vehicle() {
    delete maintenance;
}

string Vehicle::getInfo() const {
    return "Brand: " + brand + "\nModel: " + model + "\nYear: " + to_string(year) +
           "\n" + maintenance->getStatus();
}

string Vehicle::registerVehicle() const {
    return "Vehicle registered (basic).";
}

string Vehicle::registerVehicle(int code) const {
    return "Vehicle registered with code: " + to_string(code);
}