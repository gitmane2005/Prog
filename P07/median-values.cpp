#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include "show_file.h"
using namespace std;

void calc_medians(const string& input_fname, const string& output_fname){
    ifstream input_file(input_fname);
    ofstream output_file(output_fname);
    string line;
    output_file << fixed << setprecision(1);
    bool first_line = true;
    while (getline(input_file,line)){
       if(line[0] != '#'){
            if(!first_line) output_file << '\n';
            vector<double> median;
            istringstream words(line);
            string w;
            bool header = true;
            while (words >> w){
                if(header) output_file << w << ' ';
                else{
                    median.push_back(stod(w));
                }
                header = false;
            }
            sort(median.begin(), median.end());
            if(median.size() % 2 != 0) output_file << median[median.size()/2];
            else{
                output_file << 0.5 * (median[ (median.size() /2)  - 1] + median[ median.size() / 2]);
            }
            first_line = false;
        }
    }
    
}