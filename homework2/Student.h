#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
#include <string>

class Student{
    private:
        std::string studentID;
        std::string studentName;
    
    public:
        Student();
        void setID(const std::string& studentID);
        void setName(const std::string& studentName);
        void print() const;
        void save(std::ofstream& outFile) const;
};

#endif