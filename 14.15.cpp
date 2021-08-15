/* This program displays the charges for shipping a package of a certain weight
to a certain distance */
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //declare variables
    double wght, chrg;
    int miles;

    //Display the message to enter weight.
    cout << "Enter the weight (in kgs 1-20):\n";
    //Take input from user
    cin >> wght;
    //Display message to enter distance.
    cout << "Enter distance (in miles 10-3000): \n";
    cin >> miles;

    //If statement to validate input
    if(miles >= 10 && miles <= 3000){
        if(wght > 0 && wght <=20)
            chrg = (((miles % 500) > 0) ? ((miles / 500) + 1) : (miles / 500)) * 1.10;
        else if(wght > 2 && wght <= 6)
            chrg = (((miles % 500) > 0) ? ((miles / 500) + 1) : (miles / 500)) * 2.20;
        else if(wght > 6 && wght <= 10)
            chrg = (((miles % 500) > 0) ? ((miles / 500) + 1) : (miles / 500)) * 3.70;
        else if(wght > 10 && wght <= 20)
            chrg = (((miles % 500) > 0) ? ((miles / 500) + 1) : (miles / 500)) * 4.80;
            //Display the calculated charges.
            cout << "The total charges are: ";
            cout << fixed << setprecision(2) << chrg;
    }
        
    
    //Else statement for invalid miles input
    else
    {
        cout << "Invalid input! Enter distance within 10 and 3000! Try again.\n";
    }
    return 0;
}

        
    
 

