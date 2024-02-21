#include <iostream>
using namespace std;

int add(int first, int second) {
    return first + second;
}

int subtract(int first, int second) {
    return first-second;
}

// TODO: function multiply
int multiply(int first, int second) {
    return first*second;
}
// TODO: function divide
float divide(int first, int second) {
    int a = *first;
    int b = *second;
    return (float) a/b;
}
char getOperator() {
    // TODO
}

int getOperand() {
    // TODO
}

int performOperation(int first, int second, char op) {
    switch (op)
    {
    case "+":
        return add(first, second);
    case "-":
        return subtract(first, second);
    case "*":
        return multiply(*first, *second);
    case "/":
        return devide(&first, &second);
    }
    return 0;
}

int main() {
    int n1, n2;
    char op;

    n1 = getOperand();
    op = getOperator();
    n2 = getOperand();
    
    int res = performOperation(n1, n2, op);
    cout << n1 << op << n2 << "=" << res << endl;
    return 0;
}