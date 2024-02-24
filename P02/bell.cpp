#include <iostream>
using namespace std;
unsigned long bc(unsigned long n, unsigned long k){
    unsigned long upper = 1;
    unsigned long lower1 = 1;
    unsigned long lower2 = 1;
    for(int i = n; i > 0; i--){
        upper = upper * i; 
    }
    for(int i = k; i > 0; i--){
        lower1 = lower1 * i; 
    }
    for(int i = (n-k); i > 0; i--){
        lower2 = lower2 * i;
    }
    unsigned long result = upper/(lower1*lower2);
    return result;
}

unsigned long bell(unsigned long n){
    unsigned long sum = 0;
    if(n == 0 || n == 1)
        return 1;
    for(unsigned long k = 0; k<= n-1; k++){
        sum += bc(n-1,k)*bell(k);
    }
    return sum;
}
