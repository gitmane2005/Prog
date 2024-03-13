#include <iostream>
#include <algorithm>

using namespace std;
int median(const int a[], int n){
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        arr[i] = a[i];
    }
    sort(arr, arr + n);
    int media;
    if(n%2 != 0){
        n = n/2;
        media = arr[n];
    }
    else{
        media = (arr[ n / 2 - 1] + arr[ n / 2]) / 2;
    }
    delete []arr;
    return media;
}

