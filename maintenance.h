#ifndef MAINTENANCE_H
#define MAINTENANCE_H
#include <string>
using namespace std;

class Maintenance {
private:
    string lastDate;
    string status;

public:
    Maintenance(string date, string stat);
    void showStatus() const;
};

#endif