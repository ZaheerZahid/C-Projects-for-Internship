#include<iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op, ch;

    cout << "=== SIMPLE CALCULATOR ===" << endl;

    do {
        cout << "\nEnter first number: ";
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
        
        cout << "\nDo you want to calculate again? y/n: ";
        cin >> ch;
    } while(ch == 'y' || ch == 'Y');

    cout << "Thank you!";
    return 0;
}
