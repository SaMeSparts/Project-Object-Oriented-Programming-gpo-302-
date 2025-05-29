#include <iostream>
#include <string>
using namespace std;
#include "Truck.h"

Truck::Truck(string b, string m, int y, double cap, string lastDate, string status)
    : Vehicle(b, m, y, lastDate, status), loadCapacity(cap) {}

void Truck::showInfo() const {
    Vehicle::showInfo();
    cout << "Load capacity: " << loadCapacity << " tons" << endl;
}