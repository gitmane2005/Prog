#include <iostream>
#include <string>
#include <fstream>
#include "wc.h"

using namespace std;

wcresult wc(const string& filename){
    ifstream input_file(filename);
    wcresult pica = {0,0,0} ;
    // pica.bytes += input_file.size();
    string lines;
    while (getline(input_file, lines))
    {    
        pica.lines++;
        istringstream words(lines);
        string w;
        while (words >> w){
            pica.words++;
            
        }
        pica.bytes += 1 + lines.size();
    }
    input_file.close();
    return pica;
    
}
// int main(){
//     { wcresult r = wc("p2_test1.txt"); 
//   cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n'; }

// }