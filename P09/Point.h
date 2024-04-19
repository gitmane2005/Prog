#ifndef POINT_H
#define POINT_H
#include <vector>
#include <iostream>
using namespace std;
class Point{
private:
    int x;
    int y;
public:
    Point();
    Point(int i, int j);
    double distance(Point p1) const;
    void show() const {cout << '(' << x << ',' << y << ')';}
};





#endif