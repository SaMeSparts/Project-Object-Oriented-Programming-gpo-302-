#include <iostream>
#include <string>
using namespace std;
#include "driver.h"

// Constructor
Driver::Driver(string n) : name(n) {}

// Setter
void Driver::setName(const string& n) {
    name = n;
}

// Add vehicle pointer to vector
void Driver::assignVehicle(Vehicle* v) {
    assignedVehicles.push_back(v);
}

// Search vehicle by brand and model
bool Driver::hasVehicle(const string& brand, const string& model) const {
    for (Vehicle* v : assignedVehicles) {
        if (v->matches(brand, model)) {
            return true;
        }
    }
    return false;
}

// Return driver info plus all vehicles info
string Driver::showDriver() const {
    string result = "Driver: " + name + "\nAssigned vehicles:\n";
    for (Vehicle* v : assignedVehicles) {
        result += "- " + v->getInfo() + "\n";
    }
    return result;
}