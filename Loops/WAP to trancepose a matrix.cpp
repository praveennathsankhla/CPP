#include <iostream>
using namespace std;

int main() {
    int om[10][10], tm[10][10];
    int rows, cols;

    // Input: Number of rows and columns
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    // Input: Elements of the original matrix
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position " << i + 1 << ", " << j + 1 << ": ";
            cin >> om[i][j];
        }
    }

    // Transposing the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            tm[j][i] = om[i][j];
        }
    }

    // Output: Transposed matrix
    cout << "Transposed Matrix: " << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << tm[i][j] << " ";
            if (j == rows - 1) {
                cout << endl;
            }
        }
    }

    return 0;
}

