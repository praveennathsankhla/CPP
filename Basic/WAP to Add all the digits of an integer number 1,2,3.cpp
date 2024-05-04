

#include<iostream>
using namespace std;
int main() {
    int num = 123;
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of the digits of 123 is " << sum << endl;
    return 0;
}
