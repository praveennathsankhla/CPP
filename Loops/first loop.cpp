
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int f = 1;
    for (int i = 1; i <= n; ++i) {
        f*= i;//f=f*i
        cout << "Factorial of " << i << " = " << f << endl;
    }

    return 0;
}
