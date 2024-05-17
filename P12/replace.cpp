#include <iostream>
#include <string>
#include <map>



void replace(const std::map<char, char>& r, std::string& s){
    for(char& letter : s){
        if(r.find(letter) != r.end()){
            letter = r.at(letter);
        }
    }
}

