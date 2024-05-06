#include <iostream>
#include <cmath> 

using namespace std;
  
int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter an operator (+, -, *, /, ^): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case '^':
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}

