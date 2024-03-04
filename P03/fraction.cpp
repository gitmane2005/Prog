#include <iostream>
#include "fraction.h"
using namespace std;

int euclidean_algorithm(int a, int b){
    if(b == 0)
        return a;
    else
        return euclidean_algorithm(b, a%b);
}
fraction add(fraction a, fraction b){
    int den = a.den * b.den;
    int num = a.num* b.den + b.num*a.den;
    int t = euclidean_algorithm(max(den, num) , min(den, num));
    if (den/t < 0) return {-num/t, -den/t};
    else return {num/t, den/t}; 


}
fraction mul(fraction a, fraction b){
    int den = a.den * b.den;
    int num = a.num*b.num;
    int t = euclidean_algorithm(max(den, num) , min(den, num));
    if (den/t < 0) return {-num/t, -den/t};
    else return {num/t, den/t}; 
}

