#include <iostream>
#include <string>
#include <vector>



std::vector<std::pair<char, unsigned>> roman_to_int = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};

int get_int_for_roman(char t) {
    for (const auto &c : roman_to_int) {
        auto p = c.first;
        if (t == p) {
            return c.second;
        }
    }
    return 0; // Return 0 if the character is not found
}

unsigned roman_to_arab(const std::string& roman){
    unsigned sum = 0;
    size_t j = 0;

    for(size_t i = 0; i < roman.length(); i++){
        if(get_int_for_roman(roman[i]) < get_int_for_roman(roman[i+1])){
            sum += get_int_for_roman(roman[i+1]) - get_int_for_roman(roman[i]);
            i += 1;
        }
        else{
            sum += get_int_for_roman(roman[i]);
        }
        j = i;
    }
    if(j == roman.length()-1){sum += get_int_for_roman(roman[j+1]);}
    return sum;
}



// int main(){ 
//     std::string r = "IV"; 
//     std::cout << roman_to_arab(r) << '\n'; 
//     return 0;
//     }