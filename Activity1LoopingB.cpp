#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;

    for (int i = x; i >= 1; i--) {
        for (int j = 0; j < i; j++) cout << "#";
        cout << '\n';
    }
    return 0;
}