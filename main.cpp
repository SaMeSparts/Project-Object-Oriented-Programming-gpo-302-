#include <iostream>
#include <vector>
#include "car.h"
#include "truck.h"
#include "driver.h"
using namespace std;

// Main Function
int main() {
    // Create Vehicles
    Vehicle* car1 = new Car("Toyota", "Corolla", 2020, 5, "2024-10-15", "OK");
    Vehicle* truck1 = new Truck("Volvo", "FH", 2018, 18.0, "2024-08-10", "Requires service");

    // Test Setters
    car1->setBrand("Nissan"); 
    truck1->setYear(2019);     

    //  Vector of vehicle pointers 
    vector<Vehicle*> fleet;
    fleet.push_back(car1);
    fleet.push_back(truck1);

    // Polymorphism
    cout << "=== Fleet Info ===" << endl;
    for (Vehicle* v : fleet) {
        cout << v->getInfo() << endl;
        cout << v->registerVehicle() << endl;
        cout << v->registerVehicle(123) << endl;  // Overloading
        cout << "-----------------------" << endl;
    }

    // Use of setters to change vehicle
    car1->setMaintenance("2025-05-30", "Excellent");
    truck1->setMaintenance("2025-04-20", "Serviced");
    
    // Create driver and assign vehicles
    Driver d1("Luis Ramirez");
    d1.assignVehicle(car1);
    d1.assignVehicle(truck1);

    // Show driver info
    cout << "\n=== Driver Info ===" << endl;
    cout << d1.showDriver() << endl;

    // Search method
    string brandSearch = "Toyota";
    string modelSearch = "Corolla";
    if (d1.hasVehicle(brandSearch, modelSearch)) {
        cout << "Driver has the vehicle: " << brandSearch << " " << modelSearch << endl;
    } else {
        cout << "Driver does NOT have the vehicle: " << brandSearch << " " << modelSearch << endl;
    }

    // CLEAN UP MEMORY
    for (Vehicle* v : fleet) {
        delete v;
    }

    return 0;
}