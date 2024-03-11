#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int interg = 0;
    int letters = 0;
    int other = 0;
    for(int i = 0; i < n; i++){
        char val;
        cin >> val;
        if( val >= '0' && val <= '9') interg++;
        else if ((val >= 'a' && val <= 'z') || (val >= 'A' && val <= 'Z')) letters++;
        else other++;
    }
    cout << letters << " "  << interg << " " << other;
    return 0;
}