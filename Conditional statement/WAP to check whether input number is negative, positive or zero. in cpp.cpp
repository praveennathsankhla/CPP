#include<iostream>
using namespace std;

int main() {
    int number;

    // Read the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is negative, positive, or zero
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

