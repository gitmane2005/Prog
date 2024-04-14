#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main () {
    string yyyymmdd = "00010101";

    cout << yyyymmdd.substr(0, 4) << endl;
    cout << yyyymmdd.substr(5, ) << endl;
    cout << yyyymmdd.substr(8,yyyymmdd.size()) << endl;
    return 0;
}