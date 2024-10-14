#include "Chassis.h"
using namespace std;

Chassis::Chassis() {}

void Chassis::setID(const string& id) {
    chassisID = id;
}

void Chassis::setChassisModel(const string& ChassisModel){ this->ChassisModel = ChassisModel; }
void Chassis::setWheelBase(int WheelBase){ this->WheelBase = WheelBase; }
void Chassis::setTrackWidth(int TrackWidth){ this->TrackWidth = TrackWidth; }
void Chassis::setMinGroundClearance(int MinGroundClearance){ this->MinGroundClearance = MinGroundClearance; }
void Chassis::setMinTurningRadius(int MinTurningRadius){ this->MinTurningRadius = MinTurningRadius; }
void Chassis::setDriveType(const string& DriveType){ this->DriveType = DriveType; }
void Chassis::setMaxRange(int MaxRange){ this->MaxRange = MaxRange; }

void Chassis::print() const {
    cout << "Chassis Model: " << ChassisModel << endl;
    cout << "Wheel Base: " << WheelBase << " mm" << endl;
    cout << "Track Width: " << TrackWidth << " mm" << endl;
    cout << "Min_Ground_Clearance: " << MinGroundClearance << " mm" << endl;
    cout << "Min_Turning_Radius: " << MinTurningRadius << " mm" << endl;
    cout << "Drive Type: " << DriveType  << endl;
    cout << "Max Range: " << MaxRange << " km" << endl;
}

void Chassis::save(std::ofstream& outFile) const {
        outFile << "Chassis ID: " << chassisID << endl;
        outFile << "Wheel Base: " << WheelBase << " mm" << endl;
        outFile << "Track Width: " << TrackWidth << " mm" << endl;
        outFile << "Min_Ground_Clearance: " << MinGroundClearance << " mm" << endl;
        outFile << "Min_Turning_Radius: " << MinTurningRadius << " mm" << endl;
        outFile << "Drive Type: " << DriveType << endl;
        outFile << "Max Range: " << MaxRange << " km" << endl;
}
