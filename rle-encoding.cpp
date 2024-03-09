#include <iostream>

using namespace std;

void rle_encode(const char str[], char rle[]){
    int i = 1;
    int counter = 1;
    int index = 0;
    while(str[i] != '\0'){
        if(int(str[i]) != int(str[i-1])){
            rle[index] = counter;
            rle[index + 1] = char(str[i - 1]);
            index += 2;
            counter = 0;
        }
        counter++;
        i++;
    }
}
