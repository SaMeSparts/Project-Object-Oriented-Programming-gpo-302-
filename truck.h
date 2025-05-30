#include <iostream>
#include <string>
using namespace std;
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    double capacity;

public:
    Truck(string b, string m, int y, double c, string lastDate, string status);
    string getInfo() const override;
};
#endif