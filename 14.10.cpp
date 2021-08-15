/* The program prints the number of days in a month based on user input
of months and year. */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    int mnth, year;

    //Display message to enter month number
    cout << "Enter month (1-12): ";
    cin >> mnth;
    //Display message to enter the year
    cout << "Enter year: ";
    cin >> year;

    //Switch case to check number of days as per input
    switch(mnth){
        case 1:
            cout << "Month 1 : 31 days";
            break;
        case 2:
            //Display the days count for the 2nd month
            //If the user inputs Feb, check for leap year
            if(year % 100 == 0)
            {
                if(year % 400 == 0)
                    cout << "Month 2 : 29 days";
                else
                    cout << "Month 2 : 28 days";
            }
            else if(year % 4 == 0)
            {
                cout << "Month 2 : 29 days";
            }
            else
                cout << "Month 2 : 28 days";
            break;
        case 3:
            //Display the days count for the 3rd month
            cout << "Month 3 : 31 days";
            break;
        case 4:
            //Display the days count for the 4th month
            cout << "Month 4 : 30 days";
            break;
        case 5:
            cout << "Month 5 : 31 days";
            break;
        case 6:
            cout << "Month 6 : 30 days";
            break;
        case 7:
            cout << "Month 7 : 31 days";
            break;
        case 8:
            cout << "Month 8 : 31 days";
            break;
        case 9:
            cout << "Month 9 : 30 days";
            break;
        case 10:
            cout << "Month 10 : 31 days";
            break;
        case 11:
            cout << "Month 11 : 30 days";
            break;
        case 12:
            cout << "Month 12 : 31 days";
            break;
    }
    return 0;

}