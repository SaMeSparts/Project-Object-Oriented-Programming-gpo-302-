#include <iostream>
#include "car.h"
#include "truck.h"
#include "driver.h"

using namespace std;

int main() {
    // Vehículos predefinidos
    Car car1("Toyota", "Corolla", 2020, 5, "2025-01-15", "Good");
    Car car2("Honda", "Civic", 2021, 4, "2025-03-10", "Excellent");

    Truck truck1("Volvo", "FH", 2018, 18.5, "2025-02-01", "Needs inspection");
    Truck truck2("Scania", "R500", 2019, 20.0, "2025-01-25", "Good");

    int option = -1;

    while (option != 0) {
        cout << "\n========== VEHICLE MENU ==========" << endl;
        cout << "1. View all Cars" << endl;
        cout << "2. View all Trucks" << endl;
        cout << "3. Register a Vehicle (no code)" << endl;
        cout << "4. Register a Vehicle (with code)" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose an option: ";
        cin >> option;

        if (option == 1) {
            cout << "\n--- Cars ---\n";
            car1.showInfo();
            cout << "------------------------\n";
            car2.showInfo();
        }
        else if (option == 2) {
            cout << "\n--- Trucks ---\n";
            truck1.showInfo();
            cout << "------------------------\n";
            truck2.showInfo();
        }
        else if (option == 3) {
            int type;
            cout << "Register Vehicle (no code)\n";
            cout << "1. Car\n2. Truck\nType: ";
            cin >> type;

            if (type == 1) {
                car1.registerVehicle();
            }
            else if (type == 2) {
                truck1.registerVehicle();
            }
            else {
                cout << "Invalid vehicle type.\n";
            }
        }
        else if (option == 4) {
            int type, code;
            cout << "Register Vehicle (with code)\n";
            cout << "1. Car\n2. Truck\nType: ";
            cin >> type;
            cout << "Enter code: ";
            cin >> code;

            if (type == 1) {
                car1.registerVehicle(code);
            }
            else if (type == 2) {
                truck1.registerVehicle(code);
            }
            else {
                cout << "Invalid vehicle type.\n";
            }
        }
        else if (option == 0) {
            cout << "Exiting program. Goodbye!\n";
        }
        else {
            cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
