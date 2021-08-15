//A C++ program to round a number to a specific decimal place
#include<iostream>
//use math
#include<cmath>
using namespace std;
//function prototype
int integerPower(int,int);
//base exponent declaration
int base, exponent;
int main(){

    //ask the user to enter the base and the exponent
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>exponent;
    cout<<"Result is: "<<integerPower(base,exponent);
    return 0;
}
int integerPower(int base, int exponent)
{
    //set the result counter to 1
    int result = 1;
    //while exponent is greater than 0
        //multiply base into result
        //decrement exponent
        //return the result
    while(exponent > 0)
    {
        //evaluate the result
        result *= base;
        exponent--;
    }
    return result;
}
