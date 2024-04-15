#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
using namespace std;

Student::Student(const std::string& id){
    id_ = id;
}
  // accessor
std::string Student:: get_id() const{
    return id_;
}
  // member functions
void Student::add(const course& c){
    courses_.push_back(c);
}
double Student::avg() const{
    double top = 0;
    double button = 0;
    for(auto f : courses_){
        top += f.credits*f.grade;
        button += f.credits;
    }
    if(button == 0){ 
        return 0.0;
    }
    return (top/button);
}
