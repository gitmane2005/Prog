#include <iostream>
#include <string> 
#include <map>
#include <set>
#include <sstream>
#include "Page.h"
#include "Book.h"
using namespace std;
void Book::build_index(const std::set<std::string>& words) {
    int index = 1;
    for (Page& page : book_) {
        for (size_t i = 0; i < page.get_num_lines(); ++i) {
            istringstream iss(page.get_line(i));
            string word;
            while (iss >> word) {
                if (words.find(word) != words.end()) {
                    index_[word].insert(index);
                }
            }
        }
        ++index;
    }
}


// int main(){
//     { Book b;
//   if (!(b.import("book_02.txt"))) cout << "book not found! \n";
//   set<string> words = { "C++", "program", "computer", "windows" };
//   b.build_index(words);
//   b.show_index(); }
//     return 0;
// }