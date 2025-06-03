#include "maintenance.h"
#include <iostream>
using namespace std;

// Constructor
Maintenance::Maintenance(string date, string s) : lastDate(date), status(s) {}

// Destructor
string Maintenance::getStatus() const {
    return "Last maintenance: " + lastDate + "\nStatus: " + status;
}

// Setters
void Maintenance::setLastDate(const string& date) {
    lastDate = date;
}

void Maintenance::setStatus(const string& s) {
    status = s;
}