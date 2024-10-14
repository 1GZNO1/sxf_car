#include "Student.h"
using namespace std;

Student::Student() {}

void Student::setID(const string& studentID) {
    this->studentID = studentID;
}

void Student::setName(const string& studentName) {
    this->studentName = studentName;
}

void Student::print() const {
    cout << "Student Model: " << studentID << ", Size: " << studentName << endl;
}

void Student::save(std::ofstream& outFile) const {
        outFile << "Student Model: " << studentID << ", Size: " << studentName << endl;
}
