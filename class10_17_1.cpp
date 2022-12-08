//Kira Cornejo
//CSCI 1010 002
//10_17 Class
//Write a program to let the user enter an integer, then generate the hailstone sequence
#include <iostream>
using namespace std;

int main()
{
    //define variables used throughout program
    int i, number;
    cout << "Enter a number: " << endl;
    cin >> number;

    while(number != 1)
    {
        if(number % 2 == 1)
        {
            number = (3 * number) + 1;
        }
        
        else // (number % 2 == 0)
        {
            number = number / 2;
        }

        cout << number << endl;
    }
    return 0;
}