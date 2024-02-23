#include <iostream>
#include <cmath>
using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2){
    double delta = b*b - 4*a*c;
    if(delta < 0){
        x1 = NAN;
        x2 = NAN;
        return 0;
    }
    else if (delta == 0)
    {
        x1 = -b/(2*a);
        x2 = NAN;
        return 1;
    }
    else{
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        return 2;
    }
}