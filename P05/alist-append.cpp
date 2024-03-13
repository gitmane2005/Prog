#include <iostream>
#include "alist.h"

using namespace std;

void append(alist* a, const alist* b){
    int a_size = a->size, b_size = b->size;
    int new_lenthg = a_size + b_size;
    int* arr = new int[new_lenthg];
    for(int i = 0; i < a_size; i++){
        arr[i] = a->elements[i];
    }
    int t = 0;
    for(int i = a_size; i < new_lenthg; i++){
        arr[i] = b->elements[t];
        t++;
    }
    delete [] a->elements;td;
    a->size = new_lenthg;
    a->elements = arr;
}

int main(){
    { const int nA = 2;
  int eA[nA] = { 1, 2 };
  alist* a = build(nA, eA);
  const int nB = 3;
  int eB[nB] = { 3, 4, 5 };
  const alist* b = build(nB, eB);
  append(a, b);
  print(a);
  destroy(a);
  destroy(b); }
  return 0;
}