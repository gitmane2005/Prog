#include <iostream>
#include <algorithm>

using namespace std;

char* duplicate(const char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    i++;
    char* arr = new char[i];
    for(int j = 0; j < i; j++){
        if(j == i-1) arr[j] = '\0';
        else arr[j] = s[j];
    }
    return arr;
}