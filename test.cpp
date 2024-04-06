#include <iostream>
#include <string> 
using namespace std;
string g = "SADN adkfjb aksjdfb";

void to_upper( string& pila){
    for(int i = 0; i < pila.length(); i++){
        pila[i] = toupper(pila[i]);
    }
}

int main () {
    string fjh = g;
    to_upper(fjh);
    cout << g << endl;
    cout << fjh << endl;
    return 0;
}