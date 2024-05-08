
#include<iostream>
#include<climits> // Include this header file for INT_MIN
using namespace std;

int main() {
    int a[6] = {2, 24, 5, 8, 5, 4};
    int max = INT_MIN; // Minimum value for comparison
    for (int i = 0; i < 6; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    cout << max;
    return 0;
}
