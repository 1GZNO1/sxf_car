#ifndef BATTERY_H
#define BATTERY_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Battery{
    private:
        string batteryParams;
        string externalPower;
        int ChargingTime;
    
    public:
        Battery();
        void setBatteryParams(const string& batteryParams);
        void setExternalPower(const string& externalPower);
        void setChargingTime(int ChargingTime);

        void print() const;
        void save(ofstream& outFile) const;
};

#endif