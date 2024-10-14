#ifndef GYRO_H
#define GYRO_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Gyro{
    private:
        string gyroModel;
        string manufacturer;
    
    public:
        Gyro();
        void setGyroModel(const string& gyroModel);
        void setManufacturer(const string& manufacturer);
        void print() const;
        void save(ofstream& outFile) const;
};

#endif