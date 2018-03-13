#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int promptAndCalculate();

int main () {
    cout << "Enter + to add, - to subtract, * to multiply, / to divide" << endl;

    while (true) {
        double result = promptAndCalculate();
        cout << "=" << result << endl;
    }   
}

int promptAndCalculate() {
    double operand1, operand2, result = 0;
    char op;

    cin >> operand1;
    cin >> op;
    cin >> operand2;

    switch (op) {
        case '+':
            result = operand1 + operand2;
            break;

        case '-':
            result = operand1 - operand2;
            break;

        case '*':
            result = operand1 * operand2;
            break;

        case '/':
            result = operand1 / operand2;
            break;
    }

    return result;
}