#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    double gallons_num, full_tank_mi, MPG;

    //Ask user how many gallons to be used
    cout<<"How many gallons of gas be used ?  ";
    cin>>gallons_num;

    //Ask user how many number of miles
    cout<<"Enter the number of miles for full tank gas: ";
    cin>>full_tank_mi;
    //Calculate num of miles car can drive per gallon
    MPG = full_tank_mi / gallons_num;
    //Display the mpg
    cout<<"The car travels :"<<MPG<<endl;

    return 0;
}