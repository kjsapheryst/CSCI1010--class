//Kira Cornejo
//CSCI 1010 002
//Project 1
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    //declaring variables used throught program
    int num, i, round;
    i = 0;
    srand(time(0));
    //declaring num integer as random variable via included library
    num = rand() % 101;  

    //Instructions for program
    cout << "*********GUESSING GAME*********" << endl;
    cout << "| Instructions: You will have |" << endl;
    cout << "| up to 10 rounds to guess a  |" << endl;
    cout << "| number at random. Hints may |" << endl;
    cout << "| provided after each round   |" << endl;
    cout << "| to aid your guessing. You   |" << endl;
    cout << "| may guess any number from   |" << endl;
    cout << "|     0 to 100. Good Luck!    |" << endl;
       
    //if guess != num, then round will continue up to 10 tries.
    for(int round = 0; round < 20; round++)
    {
        cout << "Please enter a number between 0 and 100." << endl;
        cin >> i;
        round++;

        if(i == num)
        {
            cout << "Just right." << endl;
            break;
        }

        else if(i > num)
        {
            cout << "Too high." << endl;
        }

        else if(i < num)
        {
            cout << "Too low." << endl;
        }

        else
        {
            cout << "Error: Please try again." << endl;
        }
    }

    return 0;
}
