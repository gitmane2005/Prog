#ifndef CYLINDER_H
#define CYLINDER_H

#include <cmath>
#include <iostream>
#include <iomanip>
#include "Solid.h"

class Cylinder:public Solid{
private:
    double radius_;
    double height_;
public:
    Cylinder(point t, double radius, double height);
    const double radius() const;
    const double height() const;
    double area() const;
};

Cylinder::Cylinder(point t, double radius, double height):
Solid(t), radius_(radius), height_(height){}
const double Cylinder::radius() const{
    return radius_;
}
const double Cylinder::height() const{
    return height_;
}
double Cylinder::area() const{
    return 2*M_PI*radius_*(radius_+height_);
}

#endif