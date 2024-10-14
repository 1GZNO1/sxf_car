#include "Tire.h"
using namespace std;

Tire::Tire() {}

void Tire::setModel(const string& model) {
    this->model = model;
}

void Tire::setSize(const string& size) {
    this->size = size;
}

void Tire::print() const {
    cout << "Tire Model: " << model << ", Size: " << size << endl;
}

void Tire::save(std::ofstream& outFile) const {
        outFile << "Tire Model: " << model << ", Size: " << size << endl;
}
