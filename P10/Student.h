#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <sstream>
#include "Person.h"
class Student: public Person{
private:
    std::string course_;
public:
    Student(int id, const std::string& name, const std::string& course):Person(id, name), course_(course){};
    const std::string& course() const;
    std::string to_string() const;
};
const std::string& Student::course() const{
    return course_;
}
std::string Student::to_string() const{
    ostringstream out;
    out << id() << '/' << name() << '/' << course_;
    return out.str();
}



#endif