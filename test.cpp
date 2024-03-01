#include <iostream>
using namespace std;
void copy(char& dst[], const char scr[]){
    int i = 0;
    while(scr[i]!= '\0'){
        dst[i] = scr[i];
        i++;
    }
    dst[i] = '\0';
}

int main(){
    char scr[] = "LEIC";
    char dst[5];
    copy(dst, scr);
    cout << dst;
}
