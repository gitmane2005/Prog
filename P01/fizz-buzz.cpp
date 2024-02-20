#include <iostream>
using namespace std;

int main() {
    int player_input;
    cin >> player_input;
    for (int i = 1; i < (player_input + 1); i++) {
        if (i % 3 == 0 and i % 5 == 0) { 
            continue;
        }
        else if (i % 3 == 0){
            cout << "Fizz ";
        }
        else if (i % 5 == 0) { 
            cout << "Buzz ";
        } 
        else {
            cout << i << " "; 
        }
    }
    return 0;
}