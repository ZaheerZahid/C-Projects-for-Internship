#include<iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "=== SIMPLE CALCULATOR ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator +, -, *, / : ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if(op == '+') {
        result = num1 + num2;
        cout << "Result = " << result;
    }
    else if(op == '-') {
        result = num1 - num2;
        cout << "Result = " << result;
    }
    else if(op == '*') {
        result = num1 * num2;
        cout << "Result = " << result;
    }
    else if(op == '/') {
        if(num2!= 0) {
            result = num1 / num2;
            cout << "Result = " << result;
        }
        else {
            cout << "Error! Cannot divide by zero";
        }
    }
    else {
        cout << "Invalid Operator!";
    }

    return 0;
}
