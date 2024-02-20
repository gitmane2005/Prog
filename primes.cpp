#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
        bool is_prime = true;
        for(int l = (i-1); l>=2; l--){
            if (i%l == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            printf("%d ", i);
            //cout << i << " ";
        }
    }
    printf("\n");
    return 0;
}