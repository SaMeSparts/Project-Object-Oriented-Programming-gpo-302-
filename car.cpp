#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car(string b, string m, int y, int s, string lastDate, string status)
    : Vehicle(b, m, y, lastDate, status), seats(s) {}

string Car::getInfo() const {
    return Vehicle::getInfo() + "\nSeats: " + to_string(seats);
}