#include <iostream>

using namespace std;

unsigned long next_mersenne(unsigned long n){
    unsigned long result = 1;
    while(result-1<n){
        result = result * 2;
    }
    return result-1;
}