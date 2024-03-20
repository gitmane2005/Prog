#include <iostream>
#include <vector> 
#include <string>
#include "print_string.h"
using namespace std;


void split(const string& s, vector<string>& v){
    int i = 0;
    while(string::npos != s.find(' ', i)){
        int next = s.find(' ', i);
        if(next-i > 0){
            v.push_back(s.substr(i, next-i));
        }
        i = next+1;
    }
    int t = s.size();
    if(i != t){
        v.push_back(s.substr(i, t));
    }

}

int main(){
    { string s = "C++ LEIC FCUP FEUP";
  vector<string> v;
  split(s, v);
  print(v); }
  
  return 0;
}