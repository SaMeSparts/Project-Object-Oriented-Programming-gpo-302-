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


// Basic registerVehicle implementation
string Vehicle::registerVehicle() const {
    return "Vehicle registered (basic).";
}

// Overloaded registerVehicle with code 
string Vehicle::registerVehicle(int code) const {
    return "Vehicle registered with code: " + to_string(code);
}

// Match metod
bool Vehicle::matches(const string& b, const string& m) const {
    return (brand == b && model == m);
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

// Operator ==
bool Vehicle::operator==(const Vehicle& other) const {
    return brand == other.brand && model == other.model && year == other.year;
}

// Operator <<
ostream& operator<<(ostream& os, const Vehicle& v) {
    os << v.getInfo();
    return os;
}