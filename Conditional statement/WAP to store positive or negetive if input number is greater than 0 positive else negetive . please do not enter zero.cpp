#include <iostream>
using namespace std;

int main() {
    int number;
    string result;

cout << "Enter a number: ";
cin >> number;

    // Using conditional operator to determine Positive or Negative
    result = (number > 0) ? "Positive" : "Negative";

    cout << "Result: " << result << endl;

    return 0;
}

