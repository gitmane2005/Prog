#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;

Point::Point(){
    x = 0;
    y = 0;
}
Point::Point(int i, int j){
    x = i; 
    y = j; 
}
double Point::distance(Point p1) const{
    return pow((pow(x-p1.x, 2)) + (pow(y-p1.y, 2)), 0.5);
}