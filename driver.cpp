#include <iostream>
#include <string>
using namespace std;
#include "Vehicle.h"

Vehicle::Vehicle(string b, string m, int y, string lastDate, string status) 
    : brand(b), model(m), year(y) {
    maintenance = new Maintenance(lastDate, status);
}

Vehicle::~Vehicle() {
    delete maintenance;
}

void Vehicle::showInfo() const {
    cout << "Vehicle: " << brand << " " << model << " (" << year << ")" << endl;
    maintenance->showStatus();
}

void Vehicle::registerVehicle() {
    cout << "Vehicle registered (basic)." << endl;
}

void Vehicle::registerVehicle(int code) {
    cout << "Vehicle registered with code: " << code << endl;
}
