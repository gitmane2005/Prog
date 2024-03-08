#include <iostream>

using namespace std;


void trim(char s[]){
    int last_char_pos = 0;
    int first_char_pos = 0;
    bool char_found = false;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] != ' ' && !char_found){
            first_char_pos = i;
            last_char_pos = i;
            char_found = true;
        }
        else if (s[i] != ' ')
        {
            last_char_pos = i;
        }
    }
    if(char_found) {
        for(int i = 0; i <= last_char_pos - first_char_pos; i++){
            s[i] = s[i + first_char_pos];
        }
        s[last_char_pos - first_char_pos +1 ] = '\0';
    }
    else{
        s[0] = '\0';
    }
}