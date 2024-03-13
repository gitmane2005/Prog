#include <iostream>
using namespace std;
const char* longest(const char* pa[]){
    int i = 0;
    const char* biggest;
    int biggest_lenght = 0;
    while (pa[i] != nullptr)
    {
        int counter = 0;
        while (pa[i][counter] != '\0')
        {
            counter++;
        }
        if(counter >= biggest_lenght){
            biggest = pa[i];
            biggest_lenght = counter;
        }
        i++;
    }
    return biggest;
}
