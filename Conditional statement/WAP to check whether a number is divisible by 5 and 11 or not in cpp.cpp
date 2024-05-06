#include<iostream>
using namespace std;

int main() {
    int number;

    // Read the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is divisible by 5 and 11
    if (number % 5 == 0 && number % 11 == 0) { 
        cout << "The number is divisible by both 5 and 11." << endl;
    } else {
        cout << "The number is not divisible by both 5 and 11." << endl;
    }

    return 0;
}

