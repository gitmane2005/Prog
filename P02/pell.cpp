#include <iostream>

using namespace std;

unsigned long pell(unsigned long n){
    
    unsigned long val1 = 0;
    unsigned long val2 = 1;
    unsigned long temp = 1;
    if(n == 0)
        return 0;
    else if (n == 1)
    {
        return 1;
    }
    
    for(unsigned long i = 2; i<=n; i++){
        temp = val2;
        val2 = 2* val2 + val1;
        val1 = temp;
    }
    return val2;
}