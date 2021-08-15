/* This program calculates the total remaining amount in a month,
total deposited value, total withdrawn value, and the earned interest
in the month */
#include<iostream>
using namespace std;

int main()
{
    //Declare the required variables
    double annualInterest;
    double startBal;
    int months;
    double sumDeposit = 0.0;
    double sumWithdraw = 0.0;
    double sumInterest = 0.0;
    double depositAmt;
    double withdrawAmt;

    //Take the input for the interest rate
    cout<<"Enter annual interest rate: ";
    cin>>annualInterest;

    //Take the input for starting balance
    cout<<"Enter starting balance:  ";
    cin>>startBal;

    //Validate starting balance
    if(startBal<0)
    {
        cout<<"Invalid data. Try again.";
        cin>>startBal;
    }
    //Take the input for number of months
    cout<<"Enter the number of months:";
    cin>>months;

    //Input validation for months
    if(months<0)
    {
        cout<<"Invalid data, Try again.";
        cin>>months;
    }
    //Iterate through each month using for loop
    for(int x=1; x<=months; x++)
    {
        //Enter the deposited amount in each month
        cout<<"Enter the deposited value during month "<<x<<": ";
        cin>>depositAmt;

        //Input validation for deposited amount
        if(depositAmt<0)
        {
            cout<<"Invalid data. Try again.";
            cin>>depositAmt;
        }
        /* calculate the sum of deposit value and
        add the start balance */
        sumDeposit += depositAmt;
        startBal += depositAmt;

        //Enter the withdrawn amount in each month
        cout<<"Enter the withdrawn value during month "<<x<<": ";
        cin>>withdrawAmt;
        //Input validation for withdrawn amount
        if(withdrawAmt<0)
        {
            cout<<"Invalid data. Try again.";
            cin>>withdrawAmt;
        }
        /* Calc the sum of withdrawn value and subtract withdrawn
        value from the starting balance */
        sumWithdraw += withdrawAmt;
        startBal = startBal-withdrawAmt;

        //Check whether starting balance is 0.
        //If yes, terminate the program
        if(startBal<0)
        {
            cout<<"The account has been closed";
            break;
        }
        else
        {
            //Calc the earned interest in a month and the ending balance
            sumInterest += (annualInterest/12)*startBal;
            startBal += (annualInterest/12)*startBal;
        }
    }
    //Display all the results
    cout<<"The ending balance: "<<startBal<<endl;
    cout<<"Total deposited: "<<sumDeposit<<endl;
    cout<<" Total withdrawls: "<<sumWithdraw<<endl;
    cout<<"Earned interest: "<<sumInterest<<endl;

    return 0;
}