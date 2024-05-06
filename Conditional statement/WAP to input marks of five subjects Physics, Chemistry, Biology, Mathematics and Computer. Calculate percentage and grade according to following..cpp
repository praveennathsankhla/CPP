#include<iostream>
using namespace std;

int main() {
    int py, m, c, b, cp;
    cout << "Enter marks in Physics: ";
    cin >> py;
    cout << "Enter marks in Mathematics: ";
    cin >> m;
    cout << "Enter marks in Chemistry: ";
    cin >> c;
    cout << "Enter marks in Biology: ";
    cin >> b;
    cout << "Enter marks in Computer Programming: ";
    cin >> cp;

    int total_marks = py + m + c + b + cp;
    double percentage = (total_marks / 500.0) * 100; // for persentage in desimal

    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90) {
        cout << "Grade A";
    } else if (percentage >= 80) {
        cout << "Grade B";
    } else if (percentage >= 70) {
        cout << "Grade C";
    } else if (percentage >= 60) {
        cout << "Grade D";
    } else if (percentage >= 40) {
        cout << "Grade E";
    } else {
        cout << "Grade F";
    }

    return 0;
}

