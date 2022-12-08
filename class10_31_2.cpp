//Kira Cornejo
//CSCI 1010 002
//In-Class 10_31
//Arrays
#include <iostream>
using namespace std;

int main()
{
    int grade[15];

    for(int i = 0; i < 15; i++)
    {
        cout << "Enter student's grades: " << endl;
        cin >> grade[i];

        if(grade[0] > grade[i])
        {
            cout << "The largest value is " << grade[i] << endl;
        }
    }

    return 0;
}