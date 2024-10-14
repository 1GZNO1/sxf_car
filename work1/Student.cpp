#include "Student.h"

Student::Student(const std::string& id, const std::string& name) : studentID(id), studentName(name) {}

std::string Student::getID() const {
    return studentID;
}

std::string Student::getName() const {
    return studentName;
}
