#ifndef FRECTANGLE_H
#define FRECTANGLE_H

#include <iostream>
#include "Figure.h"

class FRectangle : public Figure{
private:
    double width_;
    double height_;
public:
    FRectangle(double x_center, double y_center, double width, double height);
    void draw() const override;
};

FRectangle::FRectangle(double x_center, double y_center, double width, double height):
Figure(x_center, y_center), width_(width), height_(height){}
void FRectangle::draw() const{
    std::cout<<"R("<< x_center_<<','<<y_center_<<")("<<width_<<','<<height_<<')';
}


#endif