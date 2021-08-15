/* This program calculates the total pay, state tax, federal tax, FICA withholdings,
and the net pay for an employee */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables needed
    int empNo;
    double gp, st, ft, fica, totalgp=0, totalst=0, totalft=0, totalFICA=0, netPay=0;
    //Get first employee number
    cout<<"Enter employee number: ";
    cin>>empNo;

    //while loop to go until 0 is entered
    while(empNo!=0)
    {
        //Get gross pay
        cout<<"Enter gross pay: ";
        cin>>gp;
        //Validate input for gross pay
        if(gp<0)
        {
            cout<<"Negative gross pay not allowed. Enter valid data. ";
            cin>>gp;
        }
        //Get state tax
        cout<<"Enter state tax: ";
        cin>>st;
        //Validate input for state tax
        if(st< 0 || st>gp)
        {
            cout<<"Enter a valid data for state tax:";
            cin>>st;
        }
        //Get federal tax
        cout<<"Enter federal tax: ";
        cin>>ft;

        //Validate input for federal tax
        if(ft<0||ft>gp)
        {
            cout<<"Enter a valid data for federal tax: ";
            cin>>ft;
        }
        //Get FICA withholdings
        cout<<"Enter FICA withholdings: ";
        cin>>fica;

        //Validate input for FICA withholdings
        if(fica<0 || fica>gp)
        {
            cout<<"Enter a valid data for FICA withholdings:";
            cin>>fica;
        }

        //Check if sum of taxes is invalid
        if(st+ft+fica>gp){
                cout<<"The sum of the taxes cannot be greater than gross pay!";
                cout<<"Enter values again for the employee: "<<endl;
                continue;
        }
        //If the value is valid, then calculate the sum
        totalgp +=gp;
        totalst += st;
        totalft += ft;
        totalFICA += fica;
        netPay += gp-st-ft-fica;
        //Enter details for next employee or enter 0 to terminate
        cout<<"Enter employee number: ";
        cin>>empNo;
    }

    //Display the final result
    cout<< "\nTotal gross pay:  $"<<totalgp;
    cout<< "\nTotal state tax:  $"<<totalst;
    cout<< "\nTotal federal tax: $"<<totalft;
    cout<< "\nTotal FICA withholdings: $"<<totalFICA;
    cout<< "\nTotal net pay for this week: $"<<netPay;

    return 0;
}