#include <fstream>
#include <iostream>
#include <string>
#include "print.h"

using namespace std;
void to_upper( string& pica); 


void normalise(const string& input_fname, const string& output_fname){
    ifstream input_file(input_fname);
    ofstream output_file(output_fname);
    string line;
    bool words_found = false;
    bool first_line = true;
    while(getline(input_file, line)){
        string w;
        if(not first_line && words_found) output_file << '\n';
        words_found = false;
        int line_size = line.size();
        int first = line_size;
        int last = 0;
        for(int i = 0; i < line_size; i++){
            if(line[i] != ' '){
                first = (i < first) ? i : first;
                last = (i > last) ? i : last;
                words_found = true;
            }
        }
        if(words_found){
            first_line = false;
            line = line.substr(first,last-first + 1);
            to_upper(line);
            output_file << line;
        }
    }
    input_file.close();
    output_file.close();
}

void to_upper( string& pica){
    for(size_t i = 0; i < pica.length(); i++){
        pica[i] = toupper(pica[i]);
    }
}


// int main(){
//     { normalise("p3_test5.txt", "p3_test5_out.txt");
//   print("p3_test5_out.txt"); }
//   return 0;
// }