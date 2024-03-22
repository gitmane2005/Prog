#include <iostream>
#include "smatrix.h"

using namespace std;


int before(size_t row_a, size_t collum_a, size_t row_b, size_t collum_b){
    if(row_a < row_b) return 1;
    else if (row_a == row_b && collum_a < collum_b) return 1;
    else if (row_a == row_b && collum_a == collum_b) return 2;
    return 0;    
}
void sum(const smatrix& a, const smatrix& b, smatrix& r){
    size_t index_a = 0;
    size_t index_b = 0;
    while (index_a < a.size() && index_b < b.size()){
        int val = before(a[index_a].row,  a[index_a].col, b[index_b].row,  b[index_b].col);
        if(val == 1){
            r.push_back(a[index_a]);
            index_a++;
        }
        else if (val == 2){
            if(a[index_a].value + b[index_b].value != 0){
                sm_entry t = {a[index_a].row,  a[index_a].col, (a[index_a].value + b[index_b].value)};
                r.push_back(t);
            }
            index_a++;
            index_b++;
        }
        else{
            r.push_back(b[index_b]);
            index_b++;
        }
    }
    for(size_t i = index_a; i < a.size(); i++){
        r.push_back(a[i]);
    }
    for(size_t i = index_b; i < b.size(); i++){
        r.push_back(b[i]);
    }
}

int main(){
    { smatrix r;
  sum({ {0, 0, 1}, {0, 1, 2}, {5, 10, 20}, {99, 12, 32} },
      { {0, 0, 1}, {0, 1, -2}, {10, 5, 20}, {99, 10, 30}, {99, 11, 31} },
      r);
  print(r); }
    return 0;
}