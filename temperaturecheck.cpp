#include <iostream>
using namespace std;
int main () {
	int temperature;	
	cout << "Enter the temperature: ";
	cin >> temperature;
	if (temperature<32) {
		cout << "Bring a heavy jacket." << endl; }
	else if (temperature >= 32 && temperature <= 50) {
			cout << "Bring a light jacket." << endl; }
	else if (temperature > 50) {
				cout << "No need for a jacket." << endl; }	
return 0;
}

