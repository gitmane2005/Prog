#include <iostream>
using namespace std;
int adigits(int a, int b, int c){
    int x = max(a, max(b, c));
    int y = min(a,min(b,c));
    int z = (a+b+c) - (y+x);
    return (x*100 + z*10 + y);

}