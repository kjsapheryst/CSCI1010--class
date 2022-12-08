//Kira Cornejo
//CSCI 1010 002
//10_17 Class
//Write a program to let the user enter a series of positive inegers and add up all numbers
#include <iostream>
using namespace std;

int main()
{
    //declare variables used throughout program
    int num, sum;

    cout << "Enter a number: " << endl;
    cin >> num;
    
    while(num != 0)
    {
        sum += num; // sum = sum + num
    }

    cout << "The sum is " << num << endl;

    return 0;
}