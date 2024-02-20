#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int k;
    int d;
    cin >> k;
    cin >> d;
    double x;
    for(int n = 0; n <= k; n++){
        x = x + (pow(-1,n))/(2*n+1);
    }
    x = 4*x;
    cout << fixed << setprecision(d) << x ;
    return 0;
}