#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float unit, bill, surcharge;

    cout << "Enter the number of units consumed: ";
    cin >> unit;

    if (unit <= 50) {
        bill = unit * 0.50;
    } else if (unit <= 150) {
        bill = 50 * 0.50 + (unit - 50) * 0.75;
    } else if (unit <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    }

    surcharge = 0.20 * bill;  // Calculate the 20% surcharge

    // Add the surcharge to the bill
    bill += surcharge;

    cout << fixed << setprecision(2);  // Set output precision to 2 decimal places
    cout << "Total electricity bill: Rs. " << bill << endl;

    return 0;
}

