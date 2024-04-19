#ifndef POLYGON_H
#define POLYGON_H
#include <vector>
#include <iostream>
#include "Point.h"
using namespace std;

class Polygon{
private:
    vector<Point> val;
public:
    Polygon();
    Polygon(vector<Point> input);
    bool add_vertex(size_t pos, Point add);
    bool get_vertex(size_t pos, Point& p) ;
    double perimeter() const;
    void show() const;
};


#endif