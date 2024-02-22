#include <iostream>
using namespace std;
int main(){
    int cycle;
    cin >> cycle;
    int x = 0;
    int temx = 0;
    int y = 0;
    int temy = 0;
    for(int i=0; i < cycle; i++){
        cin >> temx;
        cin >> temy;
        x = abs(x - temx);
        y = abs(y - temy);
    }
    cout << x+y << endl;
    return 0;
}
