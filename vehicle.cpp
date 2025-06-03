#include "vehicle.h"
#include <iostream>
#include <string>
using namespace std;
#include <iostream>

// Constructor
Vehicle::Vehicle(string b, string m, int y, string lastDate, string status)
    : brand(b), model(m), year(y) {
    maintenance = new Maintenance(lastDate, status);
}

// Destructor
Vehicle::~Vehicle() {
    delete maintenance;
}

// Base getInfo, used by child classes
string Vehicle::getInfo() const {
    return "Brand: " + brand + "\nModel: " + model + "\nYear: " + to_string(year) +
           "\n" + maintenance->getStatus();
}

// Basic registerVehicle implementation
string Vehicle::registerVehicle() const {
    return "Vehicle registered (basic).";
}

// Overloaded registerVehicle with code
string Vehicle::registerVehicle(int code) const {
    return "Vehicle registered with code: " + to_string(code);
}

// Setters
void Vehicle::setBrand(const string& b) {
    brand = b;
}

void Vehicle::setModel(const string& m) {
    model = m;
}

void Vehicle::setYear(int y) {
    year = y;
}

void Vehicle::setMaintenance(const string& lastDate, const string& status) {
    maintenance->setLastDate(lastDate);
    maintenance->setStatus(status);
}