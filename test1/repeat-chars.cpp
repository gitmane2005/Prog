#include <iostream>
using namespace std;
char* repeat_chars(const char str[], int max_repeat){
    int i = 0;
    int counter = 0;
    while(str[i] != '\0'){
        if( i < max_repeat) counter += i;
        else counter += max_repeat;
        i++;
    }
    char* ret = new char[counter + 1];
    int index = 0;
    i = 0;
    while(str[i] != '\0'){
        if( i < max_repeat){
            for(int t = 0; t < i; t++){
                ret[index] = str[i];
                index++;
            }
        }
        else{
            for(int t = 0; t < max_repeat; t++){
                ret[index] = str[i];
                index++;
            }
        }
        i++;
    }
    ret[index] = '\0';
    return ret;
}