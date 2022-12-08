#include <iostream>
#include <math.h>
using namespace std;

int main(){

int a,b,c,d, conversiond, conversionc, conversionb, conversiona, sum;

cout << "Enter a 4-digit binary number: " << endl;
cin >>a>>b>>c>>d;

conversiona = a * 8; //2^3
conversionb = b * 4; //2^2
conversionc = c * 2; //2^1
conversiond = d * 1; //2^0

sum = conversiona + conversionb + conversionc + conversiond;
cout << "The decimal value is: " << sum << endl;

    return 0;
}