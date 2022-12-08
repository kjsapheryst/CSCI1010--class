#include <iostream>
using namespace std;

int main()
{
	//declaring variable used throughout program
	char grade;

	//input of letter grade choice
	cout << "Enter letter grade: " << endl;
	cin >> grade;
	
	//if letter grade is A, B, C, D, or F, then will output specific response
	switch(grade)
	{
		case 'A': case 'a':
			cout << "Excellent" << endl;
			break;
		case 'B': case 'b':
			cout << "Good" << endl;
			break;
		case 'C': case 'c':
			cout << "Average" << endl;
			break;
		case 'D': case 'd':
			cout << "Poor" << endl;
			break;
		case 'F': case 'f':
			cout << "Failing" << endl;
			break;
		default:
			cout << "Error: Please try again." << endl;
			break;
	}
	return 0;
}