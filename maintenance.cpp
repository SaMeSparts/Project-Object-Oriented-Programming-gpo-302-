#include "maintenance.h"
#include <iostream>
using namespace std;

Maintenance::Maintenance(string date, string stat) : lastDate(date), status(stat) {}

void Maintenance::showStatus() const {
    cout << "Last maintenance: " << lastDate << ", Status: " << status << endl;
}