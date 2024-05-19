#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip> 
#include <vector>

#include "Date.h"
using namespace std;
bool operator<(Date a, Date b){
    if(a.getYear() < b.getYear()) return true;
    if(a.getMonth() < b.getMonth()) return true;
    if(a.getDay() < b.getDay()) return true;
    return false;
}

ostream& operator<<(ostream& output, Date d){
    output << setfill('0') << setw(4) << d.getYear() << '/' << setw(2) << d.getMonth() << '/' << setw(2) << d.getDay();
    return output;
}
