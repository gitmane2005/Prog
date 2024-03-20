#include <iostream>
#include "print_array.h"
using namespace std;

int filter_unique(const int arr[], int size, int out[]){
    int index = 0;
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            out[index] = arr[i];
            index++;
        }
    }
    return index;
}

