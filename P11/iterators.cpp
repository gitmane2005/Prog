#include <iostream>
#include <string>
#include <vector>
#include <list>


template <typename Itr> 
std::string to_string(Itr start, Itr end){
    std::string v = "[ ";
    for(auto itr = start; itr != end-1; itr++){
        v += *itr;
    }
    v += "]";
    return v;
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b){
    int n = 0;
    for(auto itr = start; itr != end-1; itr++){
        if(*itr == a){
            *itr == b;
            n++;
        }
    }
    return n;
}