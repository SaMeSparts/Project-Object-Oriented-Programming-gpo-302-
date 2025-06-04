#include <iostream>
#include <string>
using namespace std;
#include "Truck.h"

// Constructor
Truck::Truck(string b, string m, int y, double c, string lastDate, string status)
    : Vehicle(b, m, y, lastDate, status), capacity(c) {}

// GetInfo override adds capacity info
string Truck::getInfo() const {
    return "Brand: " + brand + "\nModel: " + model + "\nYear: " + to_string(year) + 
           "\n" + maintenance->getStatus() + "\nCapacity: " + to_string(capacity) + " tons";
}

// Override registerVehicle method
string Truck::registerVehicle() const {
    return "Truck registered with capacity " + to_string(capacity) + " tons.";
}

// Setter
void Truck::setCapacity(double c) {
    capacity = c;
}