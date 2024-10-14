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

void Car::saveToFile() const {
    std::ofstream outFile(carID + ".txt");
    if (outFile.is_open()) {
        outFile << "Car ID: " << carID << "\n"
                << "Chassis ID: " << chassisID << "\n"
                << "AGX Model: " << agxModel << "\n"
                << "Camera Model: " << cameraModel << "\n"
                << "Lidar Model: " << lidarModel << "\n"
                << "Gyro Model: " << gyroModel << "\n"
                << "Display Size: " << displaySize << "\n"
                << "Battery: " << battery << "\n"
                << "Assigned Student ID: " << studentID << "\n"
                << "Assigned Student Name: " << studentName << "\n"
                << "Tire Model: " << tireModel << "\n"
                << "Tire Size: " << tireSize << "\n";
        outFile.close();
    }
}

void Car::loadFromFile(const std::string& fileName) {
    std::ifstream inFile(fileName);
    if (inFile.is_open()) {
        std::getline(inFile, carID);
        std::getline(inFile, chassisID);
        std::getline(inFile, agxModel);
        std::getline(inFile, cameraModel);
        std::getline(inFile, lidarModel);
        std::getline(inFile, gyroModel);
        std::getline(inFile, displaySize);
        std::getline(inFile, battery);
        std::getline(inFile, studentID);
        std::getline(inFile, studentName);
        std::getline(inFile, tireModel);
        std::getline(inFile, tireSize);
        inFile.close();
    }
}

void Car::displayInfo() const {
    std::cout << "Car ID: " << carID << "\n"
              << "Chassis ID: " << chassisID << "\n"
              << "AGX Model: " << agxModel << "\n"
              << "Camera Model: " << cameraModel << "\n"
              << "Lidar Model: " << lidarModel << "\n"
              << "Gyro Model: " << gyroModel << "\n"
              << "Display Size: " << displaySize << "\n"
              << "Battery: " << battery << "\n"
              << "Assigned Student ID: " << studentID << "\n"
              << "Assigned Student Name: " << studentName << "\n"
              << "Tire Model: " << tireModel << "\n"
              << "Tire Size: " << tireSize << "\n";
}