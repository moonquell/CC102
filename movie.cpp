#include <iostream>

using namespace std;

int main()
{
	int age;
	double money;
	bool parent;
	string toPrintshow, toPrintMovie;	                                                                        
	cout << "Enter age: "; 
	cin >> age;
	if(age<13) {
		cout << "With parent? ";
		cin >> parent;
		if(parent)
			toPrintShow = "PG & G show. ";
		else
			toPrintShow = "G show. ";
	}
	else if(age<16) {
		cout << "With parent? ";
		cin >> parent;
		if(parent)
			toPrintShow = "R, PG & G show. ";
		else
			toPrintShow = "PG & G show. ";
	}
	else
		toPrintshow = "R, PG & G show. ";
	cout << "Enter money: ";	
	cin << money;
	if(money<7.5)	
		toPrintMoney = "Not enough money. ";
	else if(money<10.5)
		toPrintMoney = "Can go to matinee show. ";
	else
		toPrintMoney = "Can go to evening & matinee show. ";
	cout << toPrintShow << endl;
	cout << toPrintMoney
	return 0;
}