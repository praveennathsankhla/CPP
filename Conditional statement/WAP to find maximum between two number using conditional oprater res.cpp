#include <iostream>
using namespace std;

int main() {
    int n1, n2, result;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    // Find the maximum using conditional operator and the given formula
    result = (n1 > n2) ? (n1 + n2) : (n1 - n2);

    // Output the result
    cout << "Maximum between " << n1 << " and " << n2 << " is: " << result << endl;

    return 0;
}

