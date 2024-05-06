#include<iostream>
using namespace std;

int main() {
    int number;
    
    // Read a number between 1 and 10 from the user
    cout << "Enter a number between 1 and 10: ";
    cin >> number;
    
    // Check if the input is between 1 and 10 and print its character format
    switch(number) {
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        case 4:
            cout << "Four" << endl;
            break;
        case 5:
            cout << "Five" << endl;
            break;
        case 6:
            cout << "Six" << endl;
            break;
        case 7:
            cout << "Seven" << endl;
            break;
        case 8:
            cout << "Eight" << endl;
            break;
        case 9:
            cout << "Nine" << endl;
            break;
        case 10:
            cout << "Ten" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 10." << endl;
    }
    
    return 0;
}

