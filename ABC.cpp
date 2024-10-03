#include <iostream>
using namespace std;

int main() {
    
    double A, B, C;
    cout << "Enter the first number (A): ";
    cin >> A;
    cout << "Enter the second number (B): ";
    cin >> B;
    cout << "Enter the third number (C): ";
    cin >> C;

    if (A > B) {
        if (A > B) {
            cout << "A is the largest";
        } else {
            cout << "C is the largest";
        }
    } else if (B > C) {
    if (B > C) {
        cout << "B is the largest";
    } else {
        cout << "C is the largest";
        }
    } else {
        cout << "C is the largest";
    }

    return 0;
}
