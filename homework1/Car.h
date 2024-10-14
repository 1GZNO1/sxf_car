#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
public:
    Car(const std::string& carID);
    void setChassis(const std::string& chassisID);
    void setAGX(const std::string& agxModel);
    void setCamera(const std::string& cameraModel);
    void setLidar(const std::string& lidarModel);
    void setGyro(const std::string& gyroModel);
    void setDisplay(const std::string& displaySize);
    void setBattery(const std::string& battery);
    void assignStudent(const std::string& studentID, const std::string& studentName);
    void saveToFile() const;
    void loadFromFile(const std::string& fileName);
    void displayInfo() const;
    void setTire(const std::string& tireModel, const std::string& tireSize);

private:
    std::string carID;
    std::string chassisID;
    std::string agxModel;
    std::string cameraModel;
    std::string lidarModel;
    std::string gyroModel;
    std::string displaySize;
    std::string battery;
    std::string studentID;
    std::string studentName;
    std::string tireModel;
    std::string tireSize;
};

#endif // CAR_H
