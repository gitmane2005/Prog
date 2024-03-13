#include <iostream>
#include "print_array.h"
using namespace std;

int filter_duplicates(const int a[], int n, int b[]){
    int counter = 0;
    b[counter] = a[counter];
    counter++;    
    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]){
            b[counter] = a[i];
            counter++;
        }
    }
    return counter;
}