/* This program displays the amount of land in acres */
#include<iostream>
using namespace std;

int main()
{
    //Defining a constant to store value to acre
    const int ACRE_SQFT = 43560;
    //Defining the variables
    double land = 391876;
    //Compute formula for converting square feet into acres.
    double acre = land / ACRE_SQFT;

    //Display the value for one acre.
    cout<<"One acre is equivalent to "<<ACRE_SQFT<<" square feet."<<endl;

    //Display the land in acres
    cout<<land <<" square feet = " << acre <<" acres";

    return 0;
}