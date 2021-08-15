#include<iostream>
using namespace std;
//declare power function
int power(int, int);

int main()
{
    //declare base and exponent
    int base, exponent;
    //accept the base and exponent
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    //output the result, call the power funct
    cout<< "The Result is: "<<power(base,exponent);
    return 0;
}
//power function (returns the power value)
int power(int base, int exponent)
{
    //iterate until exponent is 1
    while(exponent != 1)
    {
        //return the output value
        return base * power(base, (exponent - 1));
    }
    return base;
}