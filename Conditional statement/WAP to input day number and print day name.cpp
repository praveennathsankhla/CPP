#include <iostream>
using namespace std;

int main() {
    int dayNumber;
    cout << "Enter a day number (1-7): ";
    cin >> dayNumber;
    if (dayNumber == 1) {
        cout << "Sunday" << endl;
    } else if (dayNumber == 2) {
        cout << "Monday" << endl;
    } else if (dayNumber == 3) {
        cout << "Tuesday" << endl;
    } else if (dayNumber == 4) {
        cout << "Wednesday" << endl;
    } else if (dayNumber == 5) {
        cout << "Thursday" << endl;
    } else if (dayNumber == 6) {
        cout << "Friday" << endl;
    } else if (dayNumber == 7) {
        cout << "Saturday" << endl;
    } else {
        cout << "Invalid day number. Please enter a number between 1 and 7." << endl;
    }

    return 0;
}

