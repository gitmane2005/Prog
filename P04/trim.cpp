#include <iostream>

using namespace std;

bool is_char(char a){
    if( (a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'b')) return true;
    return false;
}

void trim(char s[]){
    int last_char_pos = 0;
    int first_char_pos = 0;
    bool char_found = false;
    for(int i = 0; s[i] != '\n'; i++){
        if(is_char(s[i]) && !char_found){
            first_char_pos = i;
            last_char_pos = i;
            char_found = true;
        }
        else if (is_char(s[i]))
        {
            last_char_pos = i;
        }
    }
    for(int i = 0; i < last_char_pos; i++){
        
    }

}