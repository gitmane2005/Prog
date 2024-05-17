#include <iostream>
#include <string>
#include <vector>


bool max_filter(std::vector<std::vector<int>> &v, int n){
    if(n%2 == 0 || v.size() < n){
        return false;
    }
    for(int i = 0; i < v.size(), i++){
        
    }

}

void show_vector(const std::vector<std::vector<int>>& v) {
  std::cout << "{";
  for (const auto& line : v) {
    std::cout << "{ ";
    for (const auto& elem : line)
      std::cout << elem << ' ';
    std::cout << "}";
  }
  std::cout << "}";
}