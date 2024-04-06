#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void to_upper( string& pila);

int count(const string& fname, const string& word){
    ifstream input_file(fname);
    int counter = 0;
    string word_upper = word;
    to_upper(word_upper);
    string str;
    while(input_file >> str){
        to_upper(str);
        if(str == word_upper) counter ++;
    }
    input_file.close();
    return counter;
}
void to_upper( string& pila){
    for(size_t i = 0; i < pila.length(); i++){
        pila[i] = toupper(pila[i]);
    }
}

int main(){
    cout << count("p1_test_a.txt", "THE") << '\n';
    return 0;
}