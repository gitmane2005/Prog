#include <iostream>

using namespace std;

int nrl(const char s[], char low[]){
    int traker[26] = {0};
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i]>= 'a' && s[i]<= 'z'){
            traker[s[i] - 'a']++;
        }
        else if (s[i]>= 'A' && s[i]<= 'Z')
        {
            traker[s[i] - 'A']++;
        }
    }
    int lowest = 0;
    for(int i = 0; i < 26; i++){
        if(traker[i] == 1){
            low[lowest] = char(i + 'a');
            lowest++;
        }
    }
    if(lowest == 0){
        low[0] = '\0';
    }
    return lowest;
}