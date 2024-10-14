#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string& id, const std::string& name);
    std::string getID() const;
    std::string getName() const;

private:
    std::string studentID;
    std::string studentName;
};

#endif // STUDENT_H
