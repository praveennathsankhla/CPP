#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Input a number
    cout << "Enter a number: ";
    cin >> number;

    // Determine whether the number is positive, negative, or zero using nested ternary operators
    string result = (number > 0) ? "Positive" : (number < 0) ? "Negative" : "Zero";

    // Output the result
    cout << "The number is " << result << endl;

    return 0;
}

