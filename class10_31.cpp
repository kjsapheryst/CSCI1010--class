//Kira Cornejo
//CSCI 1010 002
//In-Class 10_31
//Arrays
#include <iostream>
using namespace std;

int main()
{

    int a[6]={20,39,77,19,10,89};
    
    for(int i = 0; i < 6; i++)
    {
        if(a[i] == 10)
        {
            cout << "There is 10 in the array." << endl;
            break;
        }
    }
    return 0;
}