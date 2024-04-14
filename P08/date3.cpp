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
    yyyymmdd = year_month_day.substr(0, 4) + year_month_day.substr(5, 7) + year_month_day.substr(9, 11);
    if()
}
    // accessors
int Date::get_year() const{
    return stoi(yyyymmdd.substr(0, 4));
}
int Date::get_month() const{
    return stoi(yyyymmdd.substr(5, 7));
}
int Date::get_day() const{
    return stoi(yyyymmdd.substr(9, 11));
}
    // other  member functions
bool Date::is_valid() const{
    int year = stoi(yyyymmdd.substr(0, 4));
    int month = stoi(yyyymmdd.substr(5, 7));
    int day = stoi(yyyymmdd.substr(9, 11));

}