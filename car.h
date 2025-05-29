#include <iostream>
#include <string>
using namespace std;
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int passengers;

public:
    Car(string b, string m, int y, int p, string lastDate, string status);
    void showInfo() const override;
};

#endif