#include "maintenance.h"
#include <iostream>
using namespace std;

Maintenance::Maintenance(string date, string s) : lastDate(date), status(s) {}

string Maintenance::getStatus() const {
    return "Last maintenance: " + lastDate + "\nStatus: " + status;
}
