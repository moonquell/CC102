#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int z = i; z > 0; z--) cout << z << " ";
        cout << '\n';
    }

    return 0;
}
