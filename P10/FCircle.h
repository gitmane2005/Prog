#ifndef FCIRCLE_H
#define FCIRCLE_H

#include <iostream>
#include "Figure.h"

class FCircle : public Figure{
private:
    int radius_;
public:
    FCircle(double x_center, double y_center, double radius);
    void draw() const override;
};

FCircle::FCircle(double x_center, double y_center, double radius):
Figure(x_center,y_center), radius_(radius){}

void FCircle::draw() const{
    std::cout<<"C("<< x_center_<<','<<y_center_<<")("<<radius_<<')';
}

#endif