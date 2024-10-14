#include "Lidar.h"
using namespace std;

Lidar::Lidar() {}

void Lidar::setLidarModel(const string& lidarModel) { this->lidarModel = lidarModel; }
void Lidar::setChannelCount(int ChannelCount) { this->ChannelCount = ChannelCount; }
void Lidar::setTestRange(int TestRange) { this->TestRange = TestRange; }
void Lidar::setPowerConsumption(int PowerConsumption) { this->PowerConsumption = PowerConsumption; }

void Lidar::print() const {
    cout << "Lidar Model: " << lidarModel << endl;
    cout << "Channel Count: " << ChannelCount << endl;
    cout << "Test Range: " << TestRange << "m" << endl;
    cout << "Power Consumption: " << PowerConsumption << "w" << endl;
}

void Lidar::save(std::ofstream& outFile) const {
        outFile << "Lidar Model: " << lidarModel << endl;
        outFile << "Channel Count: " << ChannelCount << endl;
        outFile << "Test Range: " << TestRange << "m" << endl;
        outFile << "Power Consumption: " << PowerConsumption << "w" << endl;
}
