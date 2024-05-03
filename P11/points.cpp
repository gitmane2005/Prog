#include <iostream>
#include <ostream>
#include <sstream>
#include "Point.h"


Point::Point(){
    x_ = 0;
    y_ = 0;
}
Point::Point(int x, int y){
    x_ = x;
    y_ = y;
}
Point::Point(const Point& p){
    x_ = p.get_x();
    y_ = p.get_y();
}
int Point::get_x() const{
    return x_;
}
int Point::get_y() const{
    return y_;
}
Point& Point::operator=(const Point& p){
    x_ = p.get_x();
    y_ = p.get_y();
    return *this;
}
Point Point::operator+(const Point& p) const{
    Point c(x_ + p.get_x(), y_ + p.get_y());
    return c;
}
Point& Point::operator+=(const Point& p){
    x_ += p.get_x();
    y_ += p.get_y();
    return *this;
}

Point Point::operator*(int v) const{
    Point c(x_*v, y_*v);
    return c;
}

Point operator*(int x, const Point& p){
    Point c(p.get_x()*x, p.get_y()*x);
    return c;
}
std::ostream& operator<<(std::ostream& os, const Point& p){
    os << '(' << p.get_x() << ',' << p.get_y() << ')';
    return os;
}