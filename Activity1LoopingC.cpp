#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Row count: ";
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int k = 0; k < n - i; k++) cout << " ";
        for (int j = 0; j < i; j++) cout << "#";
        cout << "\n";
    }
    
    return 0;
}
