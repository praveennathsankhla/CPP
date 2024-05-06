#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Read three numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Check and print the maximum number
    if (num1 >= num2 && num1 >= num3) {
        cout << "The maximum number is: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "The maximum number is: " << num2 << endl;
    } else {
        cout << "The maximum number is: " << num3 << endl;
    }

    return 0;
}

