#include <iostream>
using namespace std;

int main() {
    double percentage;
    string result;

    cout << "Enter percentage: ";
    cin >> percentage;

    // Using conditional operator to determine Pass or Fail
    result = (percentage > 40) ? "Pass" : "Fail";

    cout << "Result: " << result <<endl;

    return 0;
}

