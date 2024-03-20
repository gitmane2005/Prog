#include <iostream>
#include <vector> 
#include <string>
#include "print_string.h"
using namespace std;


void split(const string& s, vector<string>& v){
    long unsigned  int i = 0;
    while(i < s.size()){
        int next = s.find(' ', i);
        if(next-i > 0){
            string h = s.substr(i, next-i);
            //cout << h<< endl;
            v.push_back(h);
        }
        i = next+1;
    }

}

int main(){
    { string s = "C++ LEIC FCUP FEUP";
  vector<string> v;
  split(s, v);
  print(v); }
  return 0;
}