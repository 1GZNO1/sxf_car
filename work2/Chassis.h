#ifndef CHASSIS_H
#define CHASSIS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Chassis {
private:
    string chassisID;
    string ChassisModel;
    int WheelBase;
    int TrackWidth;
    int MinGroundClearance;
    int MinTurningRadius;
    string DriveType;
    int MaxRange;

public:
    Chassis();
    void setID(const string& id);
    void setChassisModel(const string& ChassisModel);
    void setWheelBase(int WheelBase);
    void setTrackWidth(int TrackWidth);
    void setMinGroundClearance(int MinGroundClearance);
    void setMinTurningRadius(int MinTurningRadius);
    void setDriveType(const string& DriveType);
    void setMaxRange(int MaxRange);
    
    void print() const;
    void save(ofstream& outFile) const;
};

#endif
