#include <iostream>
#include <string>
using namespace std;
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include "Maintenance.h"

class Vehicle {
protected:
    string brand;
    string model;
    int year;
    Maintenance* maintenance;

public:
    Vehicle(string b, string m, int y, string lastDate, string status);
    virtual ~Vehicle();
    virtual string getInfo() const;
    virtual string registerVehicle() const;
    virtual string registerVehicle(int code) const;
};

#endif
