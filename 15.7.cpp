// program to display worker payment for each day
//and the total payment at end of the period. 
#include<iostream>
using namespace std;

int main()
{
    //Init the variables
    //daily salary
    int ds= 1;
    int total = 0;
    int wd;

    cout<<"Enter the value: ";
    //working days from the user
    cin>>wd;

    //Input validation
    while(wd<1)
    {
        cout<<"Invalid input! Enter value greater than 1."<<endl;
        cout<<"Number of days: ";
        cin>>wd;
    }
    //The for loop to display the salaries
    for(int i=1; i <= wd; i++)
    {
        cout<<"Day \""<<i<<",\" the worker gets $"<<(0.01*ds)<<endl;
        //Calc the total pay
        total += ds;
        //Update the daily salary
        ds *= 2;
    }
    //Display the total
    cout<<"The total payment worker gets is $"<<(0.01*total)<<endl;

    return 0;

}