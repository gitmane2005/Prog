#include <iostream>
#include "complex.h"
#include <cmath>
using namespace std;
complex add(const complex& a, const complex& b){
    complex t = {a.x + b.x , a.y + b.y};
    return t;
}
complex mul(const complex& a, const complex& b){
    complex t = {a.x*b.x -  a.y*b.y, a.x*b.y + a.y*b.x};
    return t;
}

void mandelbrot(const complex& c, unsigned int n, complex& z_n){
    if(n == 0){
        z_n = {0.0 , 0.0};
    }
    else{
        mandelbrot(c, n-1, z_n);
        z_n = add(mul(z_n, z_n), c);
    }
}
