#include <iostream> 
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

void show_vector(const vector<pair<string, size_t>>& count) {
  cout << "[ ";
  for (const auto& e : count) {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

void is_in_count(const string word, vector<pair<string, size_t>>& count){
    bool fond = false;
    for(auto& c: count){
        if(c.first == word){
            c.second++;
            fond = true;
            break;
        }
    }
    if(!fond){count.push_back({word,1});}
}


void count_words(const string& str, vector<pair<string, size_t>>& count){
    istringstream iss(str);
    string word;
    while(iss >> word){
        for (auto& x : word) { 
        x = tolower(x); 
        }
        is_in_count(word, count);
    }
    sort(count.begin(), count.end());
}

// int main(){
//     { string s = "If you want to buy  buy  if you don't want to buy  bye bye";
//   vector<pair<string, size_t>> count;
//   count_words(s, count);
//   show_vector(count); }
//   return 0;
// }