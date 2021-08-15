/* This program displays the distance covered by a vehicle at a specific speed
in the given amount of time */
#include<iostream>
using namespace std;

int main()
{
    //Variable declarations
    double spd;
    int time;
    //Display message for user to input speed
    cout<<"Enter speed of the vehicle: ";
    cin>>spd;
    //While loop for speed input validation
    while(spd < 0)
    {
        //Display the message to enter valid input
        cout<<"Please enter positive value :";
        cin>>spd;
    }
    cout<< "Enter the time of travel: ";
    cin>>time;
    //While loop for time input validation
    while(time < 1)
    {
        //Display message to enter valid input
        cout<< "Please enter a value greater or equal to 1: ";
        //Take input from user
        cin>>time;
    }
    cout<< "Hour\tDistance Traveled\n";
    //For loop to display distance covered till given time
    for(int i=1; i <= time; i++)
    {
        cout<<i<<"\t\t"<<i * spd << endl;
    }
    return 0;
}