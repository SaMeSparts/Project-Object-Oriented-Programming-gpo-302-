#ifndef MAINTENANCE_H
#define MAINTENANCE_H
#include <string>
using namespace std;

// Maintenance Class
class Maintenance {
private:
    // Private Maintenance Attributes
    string lastDate;
    string status;

public:
    // Constructor
    Maintenance(string date, string s);
    // Destructor
    string getStatus() const;

    // Setters
    void setLastDate(const string& date);
    void setStatus(const string& s);
};

#endif