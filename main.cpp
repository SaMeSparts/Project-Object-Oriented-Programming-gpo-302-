#include <iostream>
#include "car.h"
#include "truck.h"
#include "driver.h"

using namespace std;

int main() {
    Car car1("Toyota", "Corolla", 2020, 5, "2025-01-15", "Good");
    Car car2("Honda", "Civic", 2021, 4, "2025-03-10", "Excellent");
    Truck truck1("Volvo", "FH", 2018, 18.5, "2025-02-01", "Needs inspection");
    Truck truck2("Scania", "R500", 2019, 20.0, "2025-01-25", "Good");

    Driver driver1("Alice", &car1);
    Driver driver2("Bob", &truck1);

    int option = -1;

    while (option != 0) {
        cout << "\n========== VEHICLE MENU ==========\n";
        cout << "1. View all Cars\n";
        cout << "2. View all Trucks\n";
        cout << "3. Register a Vehicle (no code)\n";
        cout << "4. Register a Vehicle (with code)\n";
        cout << "5. View Drivers\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        if (option == 1) {
            cout << "\n--- Cars ---\n";
            cout << car1.getInfo() << endl << "------------------------\n";
            cout << car2.getInfo() << endl;
        } else if (option == 2) {
            cout << "\n--- Trucks ---\n";
            cout << truck1.getInfo() << endl << "------------------------\n";
            cout << truck2.getInfo() << endl;
        } else if (option == 3) {
            cout << car1.registerVehicle() << endl;
        } else if (option == 4) {
            cout << car2.registerVehicle(123) << endl;
        } else if (option == 5) {
            cout << driver1.showDriver() << endl << "------------------------\n";
            cout << driver2.showDriver() << endl;
        } else if (option == 0) {
            cout << "Exiting program. Goodbye!\n";
        } else {
            cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
