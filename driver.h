#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef DRIVER_H
#define DRIVER_H

#include "Vehicle.h"

// Driver Class
class Driver {
private:
    // Private Truck Attributes
    string name;
    vector<Vehicle*> assignedVehicles;

public:
    // Constructor
    Driver(string n);
    
     // Setter
    void setName(const string& n);

    // Assign vehicle to driver
    void assignVehicle(Vehicle* v);

    // Search if driver has a vehicle by brand and model
    bool hasVehicle(const string& brand, const string& model) const;

    // Show driver info and all assigned vehicles info
    string showDriver() const;
};

#endif