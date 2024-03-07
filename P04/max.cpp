#include <iostream>
using namespace std;
int max(const int a[], int n){
    int h = a[0];
    for(int i = 1; i<n; i++){
        if(a[i] > h) h = a[i];
    }
    return h;
}
