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

    // ===== POLYMORPHIC BEHAVIOR =====
    cout << "=== Fleet Info ===" << endl;
    for (Vehicle* v : fleet) {
        cout << v->getInfo() << endl;
        cout << v->registerVehicle() << endl;
        cout << v->registerVehicle(123) << endl;  // Overloading
        cout << "-----------------------" << endl;
    }

    // ===== USE OF SETTERS TO UPDATE VEHICLE =====
    car1->setMaintenance("2025-05-30", "Excellent");
    truck1->setMaintenance("2025-04-20", "Serviced");
    
    // ===== CREATE DRIVER AND ASSIGN VEHICLES =====
    Driver d1("Luis Ramirez");
    d1.assignVehicle(car1);
    d1.assignVehicle(truck1);

    // ===== SHOW DRIVER INFO =====
    cout << "\n=== Driver Info ===" << endl;
    cout << d1.showDriver() << endl;

    // ===== USE SEARCH METHOD (matches, ENCAPSULATION) =====
    string brandSearch = "Toyota";
    string modelSearch = "Corolla";
    if (d1.hasVehicle(brandSearch, modelSearch)) {
        cout << "Driver has the vehicle: " << brandSearch << " " << modelSearch << endl;
    } else {
        cout << "Driver does NOT have the vehicle: " << brandSearch << " " << modelSearch << endl;
    }

    // ===== CLEAN UP MEMORY =====
    for (Vehicle* v : fleet) {
        delete v;
    }

    return 0;
}