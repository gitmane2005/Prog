#include <iostream>
using namespace std;

int main(){
    int value;
    cin >> value;
    int result = 0;
    while(value > 0){
        result = result*10 + value%10;
        value = value/10;
    }
    cout << result<< endl;
    return 1;
}