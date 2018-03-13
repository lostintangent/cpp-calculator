#include <iostream>

using namespace std;

int promptAndCalculate() {
    double operand1, operand2, result = 0;
    char op;

    cin >> operand1 >> op >> operand2;

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

int main () {
    cout << "Enter expression to calculate, using either +, -, * or /:\n\n";

    while (true) {
        double result = promptAndCalculate();
        cout << "=" << result << endl;
    }   
}