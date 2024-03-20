#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    // Take any string
    string s1 = "Geeks";
 
    // Copy two characters of s1 (starting
    // from position 3)
    int t1 = s1.find('k', 0);
 
    // prints the result
    cout << "String is: " << s1.size();
 
    return 0;
}