#include <iostream>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <string>
#include "Date3.h"
using namespace std;

Date:: Date(){
    yyyymmdd = "00010101";
}
Date::Date(int year, int month, int day){
    ostringstream oss;
    oss << setw(4) << setfill('0') << year;
    oss << setw(2) << setfill('0') << month;
    oss << setw(2) << setfill('0') << day;;
    this->yyyymmdd = oss.str();
    if(!is_valid()){
        this->yyyymmdd = "00000000";
    }
}
Date::Date(const std::string& year_month_day){
    istringstream word(year_month_day);
    char slash;
    int year;
    int month;
    int day;
    if(word >> year >> slash >> month >> slash >> day){
        *this = Date(year, month, day);
        if(!is_valid() || count(year_month_day.begin(), year_month_day.end(), '/') != 2){
            yyyymmdd = "00000000";
        }
    }
    else{
        yyyymmdd = "00000000";
    }
}

int Date::get_year() const{
    return stoi(yyyymmdd.substr(0, 4));
}
int Date::get_month() const{
    return stoi(yyyymmdd.substr(4, 2));
}
int Date::get_day() const{
    return stoi(yyyymmdd.substr(6, 2));
}
    // other  member functions
bool Date::is_valid() const{
    int year = get_year();
    int month = get_month();
    int day = get_day();
    
    if(year < 1 || month < 1 || month > 12 || day < 1)
        return false;
    
    if(month == 2) { 
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { 
            return (day <= 29);
        } else {
            return (day <= 28);
        }
    } 
    else if(month == 4 || month == 6 || month == 9 || month == 11) { 
        return (day <= 30);
    } 
    else { 
        return (day <= 31);
    }
}

// int main(){
//     Date d4("1900/1/1"); d4.write(); cout << (d4.is_valid() ? "" : "-invalid") << endl;
//     return 0;
// }