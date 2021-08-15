/* This program checks whether the date entered is a magic number */
#include<iostream>
using namespace std;

int main()
{
    //Declare the variables
    int day, month, year;

    //Display enter date message
    cout<<"Enter the day: "<<endl;

    //Take the date from the user
    cin>>day;

    cout<<"Enter the month: ";
    cin>>month;

    cout<<"Enter the year: ";
    cin>>year;

    //if statement to check if the date is magic
    if(year==day*month)
    {
        //Display magic date on screen
        cout<<"The date"<<" "<<day<<"/"<<month<<"/"<<year<<" "<<"is magic."<<endl;
    }
    else
    {
        //Display magic date on the screen
        cout<<"The date is not a magic date."<<endl;
    }
    return 0;
}