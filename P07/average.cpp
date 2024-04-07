#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

double average(const string fname){
    ifstream input(fname);
    double p;
    double sum = 0;
    int n = 0;
    while (!input.eof()){
        if(input >> p){
            sum += p;
            n++;
        }
        else{
            input.clear();
            input.ignore(1);
        }
    }
    return sum / n;
}

// int main(){ double m = average("p6_test2.txt"); 
//   cout << fixed << setprecision(2) << m << '\n'; }