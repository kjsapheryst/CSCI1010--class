#include <iostream>
using namespace std;

int main(){

double bill, tip, totalPerPerson, tipPercentage, finalTotal;
int numberOfPeople;

cout << "Enter the total amount: " << endl;
cin >> bill;

cout << "Enter number of people to split bill: " << endl;
cin >> numberOfPeople;

cout << "Enter tip percentage: " << endl;
cin >> tipPercentage;

totalPerPerson = (bill / numberOfPeople);
cout << "Total per person: " << totalPerPerson << endl;

tip = (totalPerPerson * tipPercentage);
cout << "Total tip per person: " << tip << endl;

finalTotal = totalPerPerson + tip;
cout << "Final total including tip: " << finalTotal << endl;

    return 0;
}