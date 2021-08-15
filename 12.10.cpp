/* The program to calculate the number of miles per gallon */
#include<iostream>
using namespace std;

int main()
{
    //Declare the variables
    double sizeoftank = 15;
    double maxTravel = 375;
    double mpg;
    //Calculate miles per gallon
    mpg = maxTravel / sizeoftank;

    //print the result
    cout<< "Car gets "<<mpg<<" miles per gallon."<<endl;

    return 0;
}