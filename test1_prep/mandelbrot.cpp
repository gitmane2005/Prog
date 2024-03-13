#include <iostream>
#include "complex.h"
using namespace std;

complex add(complex a, complex b){
    return {int (a.real+b.real), int (a.img+b.img)};
}
complex mul(complex a, complex b){
    return {int (a.real*b.real - a.img*b.img), int (a.real*b.img + b.real*a.img)};
}


void mandel(complex c, int n, complex z[]){
    z[0] = {0,0};
    for(int i = 1; i < n; i++){
        z[i] = add(mul(z[i-1], z[i-1]), c);
    } 
}
