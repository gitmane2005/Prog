#include <iostream>
#include <string>
#include <vector>


bool max_filter(std::vector<std::vector<int>> &v, int n){
    
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