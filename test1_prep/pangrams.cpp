#include <iostream>

using namespace std;

bool pangram(const char s[], char m[]){
    int i = 0;
    int count = 0;
    int arr[26] = {0};
    while(s[i] != '\0'){
        if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z'){
            if(arr[tolower(s[i]) - 'a'] == 0){
                count++;
                arr[tolower(s[i]) - 'a'] = 1;
            }
        }
        i++;
    }
    i = 0;
    int index = 0;
    while(i < 26){
        if(arr[i] == 0){
            m[index] = char( i + 'a');
            index++;
        }
        i++;
    }
    m[index] = '\0';
    if(count == 26) return true;
    else return false;
}
