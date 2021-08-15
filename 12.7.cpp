/* The program to display calculated rise in ocean levels after
five, seven, and ten years. */
#include<iostream>
using namespace std;

int main()
{
    //Declare constants
    const double M = 1.5;
    //Declare variables
    double n,o,p;
    //Calculate rise in ocean level after 5, 7, and 10 years
    n = M*5;
    o = M*7;
    p = M*10;

    //Display ocean's level
    cout<<"The ocean's level will rise by "<<n<<" millimeters after 5 years."<<endl;
    cout<<"The ocean's level will rise by "<<o<<" millimeters after 7 years."<<endl;
    cout<<"The ocean's level will rise by "<<p<<" millimeters after 10 years."<<endl;

    return 0;
}