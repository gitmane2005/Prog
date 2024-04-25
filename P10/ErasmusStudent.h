#ifndef ERASMUSSTUDEN_H
#define ERASMUSSTUDEN_H
#include <iostream>
#include <string>
#include <sstream>
#include "Student.h"
using namespace std;
class ErasmusStudent: public Student{
private:
    string country_;
public:
    ErasmusStudent(int id, const string& name, const string& course, const string& country);
    const string& country() const;
    string to_string() const;
};
ErasmusStudent::ErasmusStudent(int id, const string& name, const string& course, const string& country):
Student(id, name, course), country_(country){ }
const string& ErasmusStudent::country() const{
    return country_;
}
string ErasmusStudent::to_string() const{
    ostringstream out;
    out << id() << '/' << name() << '/' << course() << '/' << country_;
    return out.str();
}

#endif