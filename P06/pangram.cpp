#include <iostream>
using namespace std;

char to_lowwer(char a){
    if( a >= 'A' && a <= 'Z') return a - 'A' + 'a';
    else return a;
}
bool is_char(char a){
    if( (a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) return true;
    else return false;
}

bool pangram(const string& s, string& m){
    int i = 0;
    int arr[26] = {0};
    while (s[i] != '\0')
    {
        if(is_char(s[i])){
            char t = to_lowwer(s[i]);
            arr[t-'a'] = 1;
        }
        i++;
    }
    int index = 0;
    for(int j = 0; j < 26; j++){
        if(arr[j] == 0){
            m += char(j+'a');
            index++;
        }
    }
    if(index == 0){
        return true;
    }
    return false;
}

int main(){
    { string s = "";
  string m = "";
  bool r = pangram(s, m);
  cout << '\"' << s << "\" "
       << boolalpha << r << " \"" << m << "\"\n"; }
    return 0;

}