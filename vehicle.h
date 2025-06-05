#include <iostream>
#include <string>
using namespace std;
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include "Maintenance.h"

// Vehicle Class <Abstract>
class Vehicle {
protected:
    // Protected Vehicle Attributes
    string brand;
    string model;
    int year;
    Maintenance* maintenance;

public:
    // Constructor
    Vehicle(string b, string m, int y, string lastDate, string status);
    // Destructor
    virtual ~Vehicle();

    // // Abstract class, pure virtual
    virtual string getInfo() const = 0;
    
    // Overloaded method
    virtual string registerVehicle() const;
    virtual string registerVehicle(int code) const;
    
    // Helper method
    bool matches(const string& b, const string& m) const;

    // Operator overloading
    bool operator==(const Vehicle& other) const;
    friend ostream& operator<<(ostream& os, const Vehicle& v);

    // Setters
    void setBrand(const string& b);
    void setModel(const string& m);
    void setYear(int y);
    void setMaintenance(const string& lastDate, const string& status);
};

#endif
