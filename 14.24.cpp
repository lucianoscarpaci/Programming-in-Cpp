/* The program displays call charges based on the starting time and the number of minutes for a call entered
by the user */
#include<iostream>
using namespace std;

int main()
{
    //Declare variable
    double sTime;
    int dur, hrs, min;

    //Display the message to enter and take input
    cout<< "Enter start time of call(in HH.MM format) \n";
    cin>>sTime;

    cout<<"Enter call duration\n";
    cin>>dur;

    //Convert startTime to variables
    //Store integer parts in hrs
    hrs = static_cast<int>(sTime);

    //Store values after decimal in the min variable
    min = (sTime - static_cast<int>(sTime)) * 100;

    //Validate input for available hours using if/else statement
    if(hrs <= 23 && min <= 59)
    {
        //The if/else if statements to determine the rates
        if(hrs >= 0 && hrs <= 6)
            cout<< "Charges are $" << dur * 0.05 << ".\n";
        else if((hrs >= 7 && hrs < 19) || (hrs == 19 && min == 0))
            cout<< "Charges are $" << dur * 0.45 << ".\n";
        else if(hrs >= 19)
            cout<< "Charges are $" << dur * 0.20 << ".\n";
    }
    //Else block for invalid input
    else
    {
        cout<< "Invalid input, enter hours from 00.00 to 23.59\n";
    }

    return 0;
}