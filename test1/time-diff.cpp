#include <iostream>
using namespace std;

int main(){
    int h1 ; 
    int m1 ;
    int h2 ;
    int m2 ;
    
    cin >> h1;

    cin >> m1;

    cin >> h2;

    cin >> m2;
    int re_h = 0;
    if(h1 != h2){
        if(h1 < h2){
            re_h = (h2 - h1)*60 + (m2 - m1);
        }
        else{
            re_h = (h1 - h2)*60 + (m1 - m2);
        }
    }
    else if(m1 < m2){
        re_h = m2-m1;
    }
    else{
        re_h = m1 - m2;
    }
    cout << re_h;
    return 0;
}
