//Kira Cornejo
//CSCI 1010
//10_14
//Write a program to add up 1 + ½ + 1/3 + ¼ + ... + 1/50

#include <iostream>
using namespace std;

int main()
{

    //set i to a starting value of 1
    double i = 1;
    double sum;

    //set to execute loop up to 99 times
    while(i <= 99)
    {
        //equation to solve for the sum of 1 + ½ + 1/3 + ¼ + ... + 1/50
        sum = 1 + i/2;
        i++;
    }

    cout << sum << endl;

    return 0;
}