#include <iostream>
#include <string>
using namespace std;
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

// Truck Class
class Truck : public Vehicle {
private:
    // Private Truck Attributes
    double capacity;

public:
    // Constructor
    Truck(string b, string m, int y, double c, string lastDate, string status);

    // Override getInfo
    string getInfo() const override;

    // Override registerVehicle
    string registerVehicle() const override;

    // Setter
    void setCapacity(double c);
};
#endif