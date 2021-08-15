/* The program to display amount of memory used by different data types */
#include<iostream>
using namespace std;

int main()
{
    //Use sizeof() operator and print the results
    cout<<"char uses "<<sizeof(char)<<" bytes."<<endl;

    //Displays the size of int
    cout<<"int uses "<<sizeof(int)<<" bytes."<<endl;

    //Displays the size of float
    cout<<"float uses "<<sizeof(float)<<" bytes."<<endl;

    //Displays the size of double
    cout<<"double uses "<<sizeof(double)<<" bytes."<<endl;

    return 0;
}