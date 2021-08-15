/* Program to display calories burned
after every fifth minute till 30 minutes */
#include<iostream>
using namespace std;

int main()
{
    //Variable declaration
    double calPerMin = 3.6;

    //For loop to iterate till 30 minutes
    for(int i=5; i <= 30; i += 5)
    {
        //Display the calories burned after every fifth minutes
        cout<<"The calories burned after "<<i<<" are "<<i*calPerMin<<endl;
    }
    return 0;
}