#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longest_prefix(const vector<string>& v){
    int smallest_pr = v[0].size();
    for(size_t i = 1; i < v.size(); i++){
        for(size_t j = 0; j < v.size(); j++){
            if(j != i){
                int a = 0;
                while (v[i][a] == v[j][a])a++;
                if(a < smallest_pr) smallest_pr = a;

            }
        }
    }
    return v[0].substr(0, smallest_pr);
}

int main(){
    cout << "\"" << longest_prefix({ "ap", "apple", "apply", "ape", "april", "aq", "x" }) << "\"\n";
    return 0;
}