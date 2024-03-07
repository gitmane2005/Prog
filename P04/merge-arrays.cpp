#include <iostream>
#include "print_array.h"
using namespace std;

int* merge_arrays(const int a[], int na, const int b[], int nb){
    int *c = new int[na+nb];
    cout << c[1] << endl;
    int count_a = 0, count_b = 0, glob = 0;
    while(count_a < na && count_b < nb){
        if(a[count_a] > b[count_b]){
            c[glob] = b[count_b];
            count_b++;
        }
        else{
            c[glob] = a[count_a];
            count_a++;
        }
        glob++;
    }

    while(count_a < na){
        c[glob] = a[count_a];
        count_a++;
        glob++;
    }
    while(count_b < nb){
        c[glob] = b[count_b];
        count_b++;
        glob++;
    }
    return c;
}











/*
void merge_arrays(const int a[], int na, const int b[], int nb, int c[]){
    int count_a = 0;
    int count_b = 0;
    int glob = 0;
    while(count_a < na && count_b < nb){
        if(a[count_a] > b[count_b]){
            c[glob] = b[count_b];
            count_b++;
        }
        else{
            c[glob] = a[count_a];
            count_a++;
        }
        glob++;
    }
    while(count_a < na){
        c[glob] = a[count_a];
        count_a++;
        glob++;
    }
    while(count_b < nb){
        c[glob] = b[count_b];
        count_b++;
        glob++;
    }
}*/

int main(){
    { const int NA = 4, NB = 6;
  int a[NA] = { 1, 2, 4, 7};
  int b[NB] = { 0, 3, 5, 6, 8, 9};
  int* c = merge_arrays(a, NA, b, NB);
  print_array(c, NA+NB);
  delete [] c; }
    return 0;
}

