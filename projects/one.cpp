//Kira Cornejo
//CSCI 1010 002
//Project 1
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //declaring variables used throught program
    int num, guess, round;

    srand(time(0));
    //declaring num integer as random variable via included library
    num = rand() % 101;
    guess = 0;
    round = 0;
    //Instructions for program
    cout << "*********GUESSING GAME*********" << endl;
    cout << "| Instructions: You will have |" << endl;
    cout << "| up to 10 rounds to guess a  |" << endl;
    cout << "| number at random. Hints may |" << endl;
    cout << "| provided after each round   |" << endl;
    cout << "| to aid your guessing. You   |" << endl;
    cout << "| may guess any number from   |" << endl;
    cout << "|     0 to 100. Good Luck!    |" << endl;
        
    //Set to loop up to 10 times
    do
    {
        cout << "Please enter a number between 0 and 100." << endl;
        cin >> guess;
        round++;
    }

    while(guess < 10 && guess != num);
    
    if(guess == num)
        {    
            cout << "Just right." << endl;
            cout << "The number is " << num << endl;
        }
        else if(guess > num)
        {
            cout << "Too high." << endl;
        }

        else if(guess < num)
        {    
            cout << "Too low." << endl;
        }

    return 0;
}