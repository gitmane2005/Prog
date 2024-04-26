#include <iostream>
#include <iomanip>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;
int main(){ 
  Circle c({1, 2}, 3);
  point a [] {
      { -2.1,  2.0 }, { -1.9,  2.0 }, { 4.1,  2.0 }, { 3.9,  2.0 },
      {  1.0,  4.9 }, {  1.0, -0.9 }, { 1.0,  5.1 }, { 1.0, -1.1 },
      {  1.2, -0.3 }, {  5.2,  5.1 }, { 2.1, -0.5 }, { 3.2,  5.5 } };
  cout << fixed << setprecision(2);
  for (point& p : a)
    if (c.contains(p))
      cout << '(' << p.x << ',' << p.y << ')';
  cout << '\n';  
  return 0;
  }
  