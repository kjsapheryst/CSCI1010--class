//Kira Cornejo
//CSCI 1010 002
//10_14
//Write a program to add up 1 + 3 + 5 + 7 + ... + 99
#include <iostream>
using namespace std;

int main()
{
    //assign i to a starting value of 1
	double i = 1;
    double sum;
	
    //set the loop to run up to 50 times
	while(i <= 50)
	{
        //calculation to add up 1 + 3 + 5 + 7 + ... + 99
		sum = (i / 2) * (99 + 1);
        i++;
	}

	cout << sum << endl;

	return 0;
}