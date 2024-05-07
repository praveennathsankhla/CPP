#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 1;
    int factorial = 1;

    while (i <= n) {
        factorial *= i;
        cout << "Factorial of " << i << " = " << factorial << endl;
        i++;
    }

    return 0;
}

