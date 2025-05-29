#include <iostream>
#include <string>
using namespace std;
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    double loadCapacity;

public:
    Truck(string b, string m, int y, double cap, string lastDate, string status);
    void showInfo() const override;
};

#endif