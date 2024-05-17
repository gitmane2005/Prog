#include <iostream>
#include <string>
#include <map>
#include <list>


std::string student_highest_avg(std::map<std::string, std::list<int>> m){
    std::map<std::string, double> name_avege;
    for(auto &student : m){
        double sum = 0;
        for(auto& grande : student.second){
            sum += grande;
        }
        double average = sum/double(student.second.size());
        name_avege[student.first] = average;
    }
    double bigest_ave = 0;
    std::string name_biggets = "";
    for(auto &student : name_avege){
        if(bigest_ave < student.second){
            name_biggets = student.first;
            bigest_ave = student.second;
        }
    }
    return name_biggets;
}

