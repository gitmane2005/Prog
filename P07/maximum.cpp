#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include "show_file.h"
using namespace std;

void maximum(const string& input_fname, const string& output_fname){
    ifstream input_file(input_fname);
    ofstream output_file(output_fname);
    string w;
    double max = -100000;
    int count = 0;
    output_file << fixed << setprecision(3);
    while (input_file >> w){
        double t = stod(w);
        max = (t > max) ? t : max;
        output_file << t;
        output_file << '\n';
        count++;
    }
    output_file << "count=" << count << "/max=" << max;
    input_file.close();
    output_file.close();
}

// int main(){
//     maximum("p4_test2.txt", "p4_test2_out.txt");
//     show_file("p4_test2_out.txt"); 
// }