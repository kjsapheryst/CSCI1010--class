#include <iostream>
using namespace std;

int main()
{
	//declaring variables used throughout the program
	int a, b, c;
	cout << "Please enter three numbers: " << endl;
	cin >> a >> b >> c;
	
	//if a is largest
	if(a > b && a > c)
	{
		cout << a << "is the largest number" << endl;
	}
	//if b is largest
	else if(b > a && b > c)
	{
		cout << b << "is the largest number" << endl;
	}
	//if c is largest
	else
	{
		cout << c << " is the largest number" << endl;
	}
	return 0;
}