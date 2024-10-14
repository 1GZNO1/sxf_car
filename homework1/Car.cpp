# include "Car.h"
# include <iostream>
# include <fstream>

using namespace std;

Car::Car(const string& carID) : carID(carID) {}

void Car::setChassis(const string& chassisID){
    this -> chassisID = chassisID;
}

void Car::setAGX(const string& agxModel){
    this -> agxModel = agxModel;
}

void Car::setCamera(const string& cameraModel){
    this -> cameraModel = cameraModel;
}

void Car::setLidar(const string& lidarModel){
    this -> lidarModel = lidarModel;
}

void Car::setGyro(const string& gyroModel){
    this -> gyroModel = gyroModel;
}

void Car::setDisplay(const string& displaySize){
    this -> displaySize = displaySize;
}

void Car::setBattery(const string& battery){
    this -> battery = battery;
}

void Car::assignStudent(const string& studentID, const string& studentName){
    this -> studentID = studentID;
    this -> studentName = studentName;
}

void Car::setTire(const string& tireModel, const string& tireSize){
    this -> tireModel = tireModel;
    this -> tireSize = tireSize;
}

// 打印信息
void Car::print() const {
    std::cout << "Car ID: " << carID << std::endl;
    std::cout << "Chassis ID: " << chassisID << std::endl;
    std::cout << "AGX Model: " << agxModel << std::endl;
    std::cout << "Camera Model: " << cameraModel << std::endl;
    std::cout << "Lidar Model: " << lidarModel << std::endl;
    std::cout << "Gyro Model: " << gyroModel << std::endl;
    std::cout << "Display Size: " << displaySize << std::endl;
    std::cout << "Battery: " << battery << std::endl;
    for (const auto& tire : tireSize) {
        std::cout << "Tire Size: " << tire << std::endl;
    }
    std::cout << "Student ID: " << studentID << std::endl;
    std::cout << "Student Name: " << studentName << std::endl;

}

// 保存信息
void Car::save(std::ofstream& outFile) const {
    outFile << "Car ID: " << carID << std::endl;
    outFile << "Chassis ID: " << chassisID << std::endl;
    outFile << "AGX Model: " << agxModel << std::endl;
    outFile << "Camera Model: " << cameraModel << std::endl;
    outFile << "Lidar Model: " << lidarModel << std::endl;
    outFile << "Gyro Model: " << gyroModel << std::endl;
    outFile << "Display Size: " << displaySize << std::endl;
    outFile << "Battery: " << battery << std::endl;
    for (const auto& tire : tireSize) {
        outFile << "Tire Size: " << tire << std::endl;
    }
    outFile << "Student ID: " << studentID << std::endl;
    outFile << "Student Name: " << studentName << std::endl;
    outFile << std::endl;  // 添加一个换行符
}