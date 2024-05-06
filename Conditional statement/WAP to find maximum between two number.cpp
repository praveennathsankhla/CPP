#include<iostream>
using namespace std;

int main() {
    int num1, num2;

    // Read two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Check and print the maximum number
    if (num1 > num2) {
        cout << "The maximum number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The maximum number is: " << num2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}

