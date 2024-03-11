#include <iostream>

using namespace std;

void write_int_to_str(int n, char str[], int& pos){
    if(n > 9){
        str[pos] = n/10 + '\0';
        pos++;
        str[pos] = n%10 + '\0';
        pos++;
        }
    else if (n <= 9){
        str[pos] = n + '\0';
        pos++;
    }
}


void rle_encode(const char str[], char rle[]){
    int i = 1;
    int counter = 1;
    int pos = 0;
    while (str[i] != '\0'){
        if(int(str[i]) != int(str[i-1])){
            write_int_to_str(counter, rle, pos);
            rle[pos] = str[i-1];
            pos++;
            counter = 0;
        }
        counter++;
        i++;
    }
    if(str[0] != '\0'){
        write_int_to_str(counter, rle, pos);
        rle[pos] = str[i-1];
        rle[pos + 1] = '\0';
    }
    else{
        rle[0] = '\0';
    }
}

int main(){
    { char rle[3 + 1] = { -1, -1, -1, -1 };
  rle_encode("xxxxxxxxxxxxxxxxxxxx", rle);
  cout << rle << endl; }
  return 0;

}