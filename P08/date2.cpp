#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include "Date2.h" 

using namespace std;


Date:: Date(){
    year = 1;
    month = 1;
    day = 1;
}
Date:: Date(int year, int month, int day){
    this-> year = year;
    this-> month = month;
    this-> day = day;
    if(is_valid() == false){
        this-> year = 0;
        this-> month = 0;
        this-> day = 0;
    }

}
Date:: Date(const std::string& year_month_day){
    istringstream word(year_month_day);
    char slash;
    if(word >> year >> slash >> month >> slash >> day){
        if(!is_valid() || count(year_month_day.begin(), year_month_day.end(), '/') != 2){
            year = 0;
            month = 0;
            day = 0;
        }
    }
    else{
        year = 0;
        month = 0;
        day = 0;
    }

}


int Date::get_year() const{
    return year;
}
int Date::get_month() const{
    return month;
}
int Date::get_day() const{
    return day;
}

bool Date::is_valid() const {
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
//     Date d3("2ooo/2/28"); d3.write(); cout << (d3.is_valid() ? "" : "-invalid") << endl;
//     return 0;
// }