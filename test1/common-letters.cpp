#include <iostream>
using namespace std;


char to_lowwer(char a){
    if( a >= 'A' && a <= 'Z') return a - 'A' + 'a';
    else return a;
}
bool is_char(char a){
    if( (a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) return true;
    else return false;
}

int common_letters(const char a[], const char b[], char out[]){
    char sum[26];
    for(int i = 0; i < 26; i++){
        sum[i] = ' ';
    }
    bool commom = false;
    int i = 0;
    int index = 0;
    while(a[i] != '\0' ){
        if(is_char(a[i])){
            commom = false;
            int j = 0;
            char v = to_lowwer(a[i]);    
            while(b[j] != '\0'){
                if(is_char(b[j])){
                    char t = to_lowwer(b[j]);
                    if(v == t) {
                        commom = true;
                        break;
                    }
                }
                j++;
            }
            if(commom){
                sum[v-'a'] = v;
                index++;
            }
        
        }
        i++;
    }
    index = 0;
    for(int i = 0; i < 26; i++){
        if(sum[i] != ' '){
            out[index] = sum[i];
            index++;
        }
    }
    out[index] = '\0';
    return index;
}