#include <iostream>
using namespace std;
int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    for (int i = 0; i < SIZE; i++)
        numbers[i] = i * 10;
    cout << "Array elements: ";
    for (int i = 0; i < SIZE; i++)
        cout << numbers[i] << " ";
    cout << endl;
    cout << "Last element: " << *(numbers + SIZE - 1) << endl;
    return 0;
}