#include <iostream>
using namespace std;

int main ()
{
    char choice;
    cout << "Is it raining? [y/n]: ";
    cin >> choice;
    if(choice == 'y') {
        cout << "Get umbrella";
    }
    return 0;
}