#include<iostream>
#include<cmath>
//program uses namespace
using namespace std;
//function prototypes
int roundToInteger(double);
double roundToTenths(double);
double roundToHundreths(double);
double roundToThousandths(double);
//global variable
double number;
//main begins
int main()
{
    //prompt the message and accept the numbers
    cout<<"Evaluate the round of a number"<<endl;
    cout<<"Enter the number: ";
    cin>>number;
    //display entered number, integernumber is roundToInteger
    cout<<"Entered number is: "<<number<<" integer number is: "<<roundToInteger(number)<<endl;
    //display entered number, tenth,hundredth,thousandth rounded is
    cout<<"Entered number is: "<<number<<" tenth rounded is: "<<roundToTenths(number)<<endl;
    cout<<"Entered number is: "<<number<<" hundreth rounded is: "<<roundToHundreths(number)<<endl;
    cout<<"Entered number is: "<<number<<" thousanth rounded is: "<<roundToThousandths(number)<<endl;
    return 0;
}
//function integer floor rounding
int roundToInteger(double number)
{
    return floor(number + .5);
}
//function of tenth floor rounding
double roundToTenths(double number)
{
    return floor(number * 10 + .5)/10;
}
//function of hundreth floor rounding
double roundToHundreths(double number)
{
    return floor(number * 100 + .5)/100;
}
//function of thousanth floor rounding
double roundToThousanths(double number)
{
    return floor(number * 1000 + .5)/1000;
}