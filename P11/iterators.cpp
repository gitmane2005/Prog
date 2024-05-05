#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <sstream>

template <typename T>
std::string pointerToString(const T ptr) {
    std::stringstream ss;
    ss << ptr;
    return ss.str();
}

template <typename Itr> 
std::string to_string(Itr start, Itr end){
    std::string v = "[ ";
    for(auto itr = start; itr != end; itr++){
        v += pointerToString(*itr);
        v += ' ';
    }
    v += "]";
    return v;
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b){
    int n = 0;
    for(auto itr = start; itr != end; itr++){
        if(*itr == a){
            *itr = b;
            n++;
        }
    }
    return n;
}
// using namespace std;
// int main(){
//     { vector<int> v { 5, 1, 2, 3, 4, 5 };
//   cout << replace(v.begin() + 1, v.end() - 1, 5, 0) << ' '
//        << to_string(v.cbegin(), v.cend()) << '\n'; }
//        return 0;
// }