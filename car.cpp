#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car(string b, string m, int y, int p, string lastDate, string status)
    : Vehicle(b, m, y, lastDate, status), passengers(p) {}

void Car::showInfo() const {
    Vehicle::showInfo();
    cout << "Passenger capacity: " << passengers << endl;
}