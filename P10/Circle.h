#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>
#include "Shape.h"

class Circle:public Shape{
private:
    double radius_;
public:
    Circle(point center, double radius);
    double area() const override;
    double perimeter() const override;
    bool contains(const point& p) const override;
};

Circle::Circle(point center, double radius):
Shape(center), radius_(radius){}

double Circle::area() const{
    return M_PI*pow(radius_, 2);
}
double Circle::perimeter() const{
    return 2*radius_*M_PI;
}
bool Circle::contains(const point& p)const{
    if((get_center().x-radius_) >=  p.x || (get_center().x+radius_) <=  p.x){
        return false;
    }
    if((get_center().y-radius_) >=  p.y || (get_center().y+radius_) <=  p.y){
        return false;
    }
    return true;
}
#endif