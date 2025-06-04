#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

// Constructor
Car::Car(string b, string m, int y, int s, string lastDate, string status)
    : Vehicle(b, m, y, lastDate, status), seats(s) {}

// getInfo override, adds seats info
string Car::getInfo() const {
    return "Brand: " + brand + "\nModel: " + model + "\nYear: " + to_string(year) + 
           "\n" + maintenance->getStatus() + "\nSeats: " + to_string(seats);
}
// Override registerVehicle method
string Car::registerVehicle() const {
    return "Car registered with " + to_string(seats) + " seats.";
}

// Setter
void Car::setSeats(int s) {
    seats = s;
}