#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <cmath>
#include "Shape.h"

class Rectangle:public Shape{
private:
    double width_;
    double height_;
public:
    Rectangle(point center, double width, double height);
    double area() const override;
    double perimeter() const override;
    bool contains(const point& p) const override;
};

Rectangle::Rectangle(point center, double width, double height):
Shape(center), width_(width), height_(height){}

double Rectangle::area() const{
    return width_*height_;
}
double Rectangle::perimeter() const{
    return 2*width_+2*height_;
}
bool Rectangle::contains(const point& p) const{
    double width_half = width_/2;
    double height_half = height_/2;
    if((get_center().x-width_half) >  p.x || (get_center().x+width_half) <  p.x){
        return false;
    }
    if((get_center().y-height_half) >  p.y || (get_center().y+height_half) <  p.y){
        return false;
    }
    return true;
}

#endif