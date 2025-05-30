#include <iostream>
#include <string>
using namespace std;
#include "Truck.h"

Truck::Truck(string b, string m, int y, double c, string lastDate, string status)
    : Vehicle(b, m, y, lastDate, status), capacity(c) {}

string Truck::getInfo() const {
    return Vehicle::getInfo() + "\nCapacity: " + to_string(capacity) + " tons";
}