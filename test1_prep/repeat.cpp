#include <iostream>
using namespace std;
char* repeat(const char str[], int n){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    char* arr = new char[i*n + 1];
    int index = 0;
    for(int t = 0; t < n; t++){
        for(int j = 0; j < i; j++){
            arr[index] = str[j];
            index++;
        }
    }
    arr[index] = '\0';
    return arr;
}