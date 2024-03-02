#include <iostream>
#include "complex.h"
#include <cmath>
using namespace std;

void add(const complex& a, const complex& b, complex& r){
    r = {a.x + b.x , a.y + b.y};
}
void mul(const complex& a, const complex& b, complex& r){
    r = {a.x*b.x -  a.y*b.y, a.x*b.y + a.y*b.x};
}
double norm(const complex& c){
    return sqrt(c.x*c.x + c.y*c.y);
}