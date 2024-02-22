#include <iostream>
using namespace std;
int main(){
    int cycle;
    cin >> cycle;
    int x = 0;
    cin >> x;
    int y = 0;
    cin >> y;

    int temx = 0;
    int temy = 0;
    int distance = 0;
    for(int i=0; i < cycle; i++){
        cin >> temx;
        cin >> temy;
        distance += abs(x - temx) + abs(y - temy);
        x = temx;
        y = temy;
    }
    cout << distance << endl;
    return 0;
}
