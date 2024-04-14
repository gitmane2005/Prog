#include <iostream>
#include <string>
#include "Date3.h"
using namespace std;

Date:: Date(){
    yyyymmdd = "00010101";
}
Date::Date(int year, int month, int day){
    yyyymmdd = to_string(year) + to_string(month) + to_string(month);
}
Date::Date(const std::string& year_month_day){
    
}
    // accessors
    int get_year() const;
    int get_month() const;
    int get_day() const;
    // other  member functions
    bool is_valid() const;