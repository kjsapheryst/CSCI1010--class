// Kira Cornejo
// CSCI 1010 002
// 9_28
// Create a calculator.
// ORIGINAL ASSIGNMENT MODIFIED

#include <iostream>
using namespace std;

int main()
{
    //define variables used in program
    char response;
    double addone, addtwo, subone, subtwo, multone, multtwo, divone, divtwo, answer;

    while(true)
    {
        cout << "********Welcome********" << endl;
        cout << "Please select from the menu: " << endl;
        cout << "A. Addition " << endl;
        cout << "S. Subtraction " << endl;
        cout << "M. Multiplication " << endl;
        cout << "D. Division " << endl;
        cout << "Q. Quit" << endl;
        cin >> response;

        
        if(response == 'A' || response == 'a')
        {
            cout << "Please enter two numbers: " << endl;
            cin >> addone >> addtwo;

            answer = addone + addtwo;
            cout << addone << "+" << addtwo << "=" << answer << endl;
        }

        else if(response == 'S' || response == 's')
        {
            cout << "Please enter two numbers: " << endl;
            cin >> subone >> subtwo;

            answer = subone - subtwo;
            cout << subone << "-" << subtwo << "=" << answer << endl;
        }

        else if(response == 'M' || response == 'm')
        {
            cout << "Please enter two numbers: " << endl;
            cin >> multone >> multtwo;

            answer = multone * multtwo;
            cout << multone << "*" << multtwo << "=" << answer << endl;
        }

        else if(response == 'D' || response == 'd')
        {
            cout << "Please enter two numbers: " << endl;
            cin >> divone >> divtwo;

            answer = divone / divtwo;
            cout << divone << "/" << divtwo << "=" << answer << endl;
        }

        else if(response == 'Q' || response == 'q')
        {
            break;
        }
        
        else
        {
            cout << "Error: Please try again." << endl;
        }
    }
    return 0;
}