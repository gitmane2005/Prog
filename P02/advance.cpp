#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0);
}
int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}
void advance(int delta, int& d, int& m, int& y){
    while (delta > 0){
        int days_mouth = daysInMonth(m, y);
        if(d + delta  <= days_mouth){
            d += delta;
            break;
        }
        else{
            if(m == 12){
                delta = delta - (days_mouth - d +1);
                d = 1;
                m = 1;
                y++;
            }
            else{
                delta = delta - (days_mouth - d + 1);
                d = 1;
                m++;
            }
        }
    }
}
