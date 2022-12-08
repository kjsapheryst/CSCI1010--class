#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y, distance;

    cout << "Enter first position point: " << endl;
    cin >> x;
    cout << "Enter second position point: " << endl;
    cin >> y;

    distance = pow(x,2) + pow(y,2);
    cout << "The distance between the two points is: " << distance << endl;

    return 0;
}