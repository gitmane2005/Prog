#include <cctype>
#include <iostream>
#include <cmath>

using namespace std;
unsigned long hstr_to_integer(const char hstr[]){
    unsigned long sum = 0;
    for(int i = 0; '\0' != hstr[i]; i++){
        if(hstr[i]>= 'a' && hstr[i]<= 'f'){
            sum = (sum * 16) + (10 + int(hstr[i]- 'a'));
        }
        else if (hstr[i]>= 'A' && hstr[i]<= 'F')
        {
            sum = (sum * 16) + (10 + int(hstr[i]- 'A'));
        }
        else{
            sum = (sum * 16) + ( int(hstr[i]- '0'));
        }
    }
    return sum;
}