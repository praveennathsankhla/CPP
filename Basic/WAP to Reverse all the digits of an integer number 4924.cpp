#include<iostream>
using namespace std;
int main() {
    int num = 4924;
    int reversed = 0;
    while(num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    cout << "Reversed number is " << reversed << endl;
    return 0;
}
