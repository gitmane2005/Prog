#include <iostream>
#include "cdata.h"
using namespace std;

int* expand_cdata(const cdata a[], int n){
    int counter = 0;
    for(int i = 0; i < n; i++) {
        counter += a[i].count;
    }

    int* arr = new int[counter];
    counter = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < a[i].count; j++){
            arr[counter] = a[i].value;
            counter++;
        }
    }
    return arr;
}
