#include <iostream>
#include <vector> 
#include <string>
#include "print_vector.h"

using namespace std;

template <typename T>
void normalise(vector<T>& v, const T& min, const T& max){
    for(size_t i = 0; i < v.size(); i++){
        if(v[i] < min) v[i] = min;
        else if(v[i] > max) v[i] = max;            
    }
}


int main(){
    { vector<double> v { -1.2, 2.2, -3.5, 4.3, 5.2 }; 
  normalise(v, 0.5, 5.1); print(v); }
  { vector<string> v { "Diego", "Afonso", "Antonio", "Bernardo", "Tolentino", "Zeferino", "Xavier" };
  normalise(v, string("Antonio"), string("Zacarias")); print(v); }
  return 0;
}