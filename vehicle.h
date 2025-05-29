#include <iostream>
#include <string>
using namespace std;
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include "Maintenance.h"

class Vehicle {
protected:
    std::string brand;
    std::string model;
    int year;
    Maintenance* maintenance;

public:
    Vehicle(string b, string m, int y,string lastDate,string status);
    virtual ~Vehicle();
    
    virtual void showInfo() const;
    void registerVehicle();
    void registerVehicle(int code);
};

#endif
