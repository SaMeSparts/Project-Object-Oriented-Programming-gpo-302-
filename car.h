#include <iostream>
#include <string>
using namespace std;
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

// Car Class
class Car : public Vehicle {
private:
    // Private Car Attributes
    int seats;

public:
    // Construtor
    Car(string b, string m, int y, int s, string lastDate, string status);

    // Override getInfo
    string getInfo() const override;

    // Override registerVehicle
    string registerVehicle() const override;

    // Setter
    void setSeats(int s);
};

#endif