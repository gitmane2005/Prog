#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int number){
    
    bool is_prime = true;
    int ave = number/2;
    for(int l = 2; l <= ave; l++){
        if (number%l == 0){
            is_prime = false;
            break;
        }
    }
    return is_prime;
}
int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    for(int i = a; i <= b; i++){
        if(is_prime(i) && i > 2){
            int one_count = 0;
            int tem = i;
            while(tem>0){
                one_count += (tem%2);
                tem = tem/2;
            }
            if(is_prime(one_count)){
                cout << i << " ";
            }

        }
    }
    return 1;
}

