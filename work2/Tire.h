#ifndef TIRE_H
#define TIRE_H

#include <iostream>
#include <fstream>
#include <string>

class Tire {
private:
    std::string model;
    std::string size;

public:
    Tire();
    void setModel(const std::string& model);
    void setSize(const std::string& size);
    void print() const;
    void save(std::ofstream& outFile) const;
};

#endif
