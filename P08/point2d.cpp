#include <iostream>
#include <iomanip>
#include <cmath>
#include "Point2d.h"
using namespace  std;

void Point2d:: translate(const Point2d& t){
    x += t.get_x();
    y += t.get_y();
}
double Point2d:: distance_to(const Point2d& p) const{
    return std:: pow( pow(x - p.get_x(), 2) + pow(y - p.get_y(), 2), 0.5);
}
// int main(){
//     { Point2d a { 1.0, 2.1 };
//   a.translate({ -0.3, 0.5 });
//   cout << fixed << setprecision(2) 
//        << a.get_x() << ' ' << a.get_y() << '\n'; }
// }