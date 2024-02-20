#include <iostream>
using namespace std;

int main(){
    int numbers = 0;
    int letters = 0;
    int syb = 0;
    int n;
    cin >> n;
    for(int i = 0; i< n; i++){
        char poss;
        cin >> poss;
        if(isalpha(poss)){
            letters++;
        }
        else if(isdigit(poss)){
            numbers++;
        }
        else{
            syb++;
        }
    }
    cout << letters << " " << numbers << " " << syb;
    return 0;
}