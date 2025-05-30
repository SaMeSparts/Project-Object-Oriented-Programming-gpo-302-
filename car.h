#include <iostream>
#include <string>
using namespace std;
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int seats;

public:
    Car(string b, string m, int y, int s, string lastDate, string status);
    string getInfo() const override;
};

#endif