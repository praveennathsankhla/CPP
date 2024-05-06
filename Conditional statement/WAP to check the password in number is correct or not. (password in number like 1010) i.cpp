#include<iostream>
using namespace std;

int main() {
    int password;
    
    // Read the password in number format
    cout << "Enter the password (in number format): ";
    cin >> password;
    
    // Check if the password is correct using a switch statement
    switch(password) {
        case 1010:
            cout << "Access granted! Password is correct." << endl;
            break;
        default:
            cout << "Access denied! Password is incorrect." << endl;
    }
    
    return 0;
}

