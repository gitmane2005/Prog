#include <iostream>
#include "interval.h"
using namespace std;

interval smallest(const interval a[], int n){
    int min = (int(a[0].end.h) - int(a[0].start.h))*60 + (int(a[0].end.m) - int(a[0].start.m));
    interval result = a[0];
    //unsigned char v = 60;
    for(int i = 1; i < n; i++){
        if((int(a[i].end.h) - int(a[i].start.h))*60 + (int(a[i].end.m) - int(a[i].start.m)) < min){
            result = a[i];
            min = (int(a[i].end.h) - int(a[i].start.h))*60 + (int(a[i].end.m) - int(a[i].start.m));
        }
        
    }
    return result;
}