#include<iostream>
using namespace std;

int main()
{
    int a[100], i, data, loc, n;
    cout << "Enter how many data you want to enter: ";
    cin >> n;
    cout << "Enter " << n << " data:" << endl;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the data which you want to insert: ";
    cin >> data;
    cout << "Enter the location where you want to insert: ";
    cin >> loc;

    // data shifting
    for(i = n - 1; i >= loc - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[loc - 1] = data;
    n++; // Increase the size of the array

    cout << "Data inserted successfully." << endl;
    cout << "Updated array:" << endl;
    for(i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

