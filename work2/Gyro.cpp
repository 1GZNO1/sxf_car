#include "Gyro.h"
using namespace std;

Gyro::Gyro() {}

void Gyro::setGyroModel(const string& gyroModel) {
    this->gyroModel = gyroModel;
}

void Gyro::setManufacturer(const string& manufacturer) {
    this->manufacturer = manufacturer;
}

void Gyro::print() const {
    cout << "Gyro Model: " << gyroModel << endl;
    cout << "manu facturer: " << manufacturer << endl;
}

void Gyro::save(std::ofstream& outFile) const {
        outFile << "Gyro Model: " << gyroModel << endl;
        outFile << "manu facturer: " << manufacturer << endl;
}
