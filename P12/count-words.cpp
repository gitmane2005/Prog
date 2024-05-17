#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

void show_map(const std::map<std::string, size_t>& count) {
  std::cout << "[ ";
  for (const auto& e : count) {
    std::cout << e.first << ":" << e.second << ' ';
  }
  std::cout << "]\n";
}

void count_words(const std::string& str, std::map<std::string, size_t>& count){
    std::istringstream iss(str);
    std::string word;
    while(iss >> word){
        for(char& l : word){
            l = tolower(l);
        }
        if(count.find(word)!=count.end()){
            count.at(word)++;
        }
        else{
            count[word]= 1;
        }
    }

}
