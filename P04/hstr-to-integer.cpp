#include <cctype>
#include <iostream>
#include <map>
#include <cmath>
#include <cstring>
using namespace std;
unsigned long hstr_to_integer(const char hstr[]){
    unsigned long sum = 0;
    map<char, int> nsei;
    nsei['a'] = 10;
    nsei['b'] = 11;
    nsei['c'] = 12;
    nsei['d'] = 13;
    nsei['e'] = 14;
    nsei['f'] = 15;
    for(int i = strlen(hstr) - 1, j = 0; i > -1; i--){
        if(nsei.count(tolower(hstr[i]))){
            sum += nsei[tolower(hstr[i])]* pow(16, j);
        }
        else{
            sum += (tolower(hstr[i])  - '0')* pow(16, j);
        }
        j++;
    }
    return sum;
}