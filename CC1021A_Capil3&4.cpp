#include <iostream>

using namespace std;

int main () 
{
    string name;
    float pOl = 25, pOr = 3.6;
    float current = 0.0, nOO = 0, kloLemon = 0.0, discount = 0;
    float storg, stlem, total, topay;

    cout << "Enter your nickname\t\t:\t";
    cin >> name;
    cout << "****************************************************\n";
    cout << "ORANGES & LEMONS\n";
    cout << "****************************************************\n";
    cout << "Price of orange\t\t:\t$" << pOr << "/pc\n";
    cout << "Price of lemon\t\t:\tPhp" << pOl << "/kilo\n";
    cout << "****************************************************\n";
    cout << "Enter pcs. of Lemons you want\t:\t";
    cin >> nOO;
    cout << "How many kilos of Oranges you want\t:\t";
    cin >> kloLemon;
    cout << "****************************************************\n";
    cout << "Enter discount on Orange (in%)\t:\t";
    cin >> discount;
    cout << "Enter current concversion (1$=Php)\t:\t";
    cin >> current;
    cout << "****************************************************\n";
    
    storg = (pOr * nOO) * current;
    stlem = (pOl * kloLemon);
    total = storg + stlem;
    topay = storg - (storg * (discount / 100)) + stlem;
    
    cout << "Original amount to be paid\t\t:\t" << total << endl;
    cout << name << " you need to pay (Discount price)\t : \t" << topay;

    return 0;
    
}
