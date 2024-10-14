#include "Battery.h"
using namespace std;

Battery::Battery() {}

void Battery::setBatteryParams(const string& batteryParams) { this->batteryParams = batteryParams; }
void Battery::setExternalPower(const string& externalPower) { this->externalPower = externalPower; }
void Battery::setChargingTime(int ChargingTime) { this->ChargingTime = ChargingTime; }

void Battery::print() const {
    cout << "Battery Params: " << batteryParams << endl;
    cout << "External Power: " << externalPower << "V" << endl;
    cout << "Charging Time: " << ChargingTime << "h" << endl;
}

void Battery::save(std::ofstream& outFile) const {
        outFile << "Battery Params: " << batteryParams << endl;
        outFile << "External Power: " << externalPower << "V" << endl;
        outFile << "Charging Time: " << ChargingTime << "h" << endl;
}
