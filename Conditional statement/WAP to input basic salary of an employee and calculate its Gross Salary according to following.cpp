#include <iostream>
using namespace std;

int main() {
    float basicSalary, hra, da, grossSalary;

    // Input the basic salary from the user
    cout << "Enter the Basic Salary: ";
    cin >> basicSalary;

    // Calculate HRA and DA based on the given conditions
    if (basicSalary <= 10000) {
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    } else {
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }
    grossSalary = basicSalary + hra + da;

    // Display the Gross Salary
    cout << "Gross Salary: " << grossSalary << endl;

    return 0;
}

