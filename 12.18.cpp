/* This program the number of people who prefer one or more energy drinks */
#include<iostream>
using namespace std;

int main()
{
    //declare constant
    const int CUSTOMERS = 16500;
    //declare variables
    double oneormoredrinks = 0.15, citrusflavor = 0.58;
    int approxoneormore, approxcitrus;
    //Calculate number of people buying one or more drinks per week
    approxoneormore = CUSTOMERS*oneormoredrinks;
    //Calculate total number of people who prefer citrus drinks
    approxcitrus = approxoneormore*citrusflavor;
    //Display the results
    cout<<"The number of customers who purchased one or more ";
    cout<< "energy drinks per week is: "<<approxoneormore<<endl;
    cout<<"\nThe number of customers who prefer citrus energy drinks is :"<<approxcitrus<<endl;

    return 0;

}