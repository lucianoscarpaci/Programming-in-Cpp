/* Program to display projected rates after every year 
till six years for membership fees of a club */
#include<iostream>
using namespace std;

int main()
{
    //Variable declaration
    float annIncRate = 0.04;
    double chrg = 2500;

    //For loop to iterate till next 6 years
    for(int i=1; i <= 6; i++)
    {
        //Calc the projected rates each year
        chrg += chrg*annIncRate;
        //Display projected rates after each year
        cout<<"The projected rate after "<<i<<" year(s) is $"
        <<chrg<<". "<<endl;
    }

    return 0;
}