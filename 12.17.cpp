/* This program displays an amount with commission, without commission and the total amount. */

#include<iostream>
using namespace std;

int main()
{
    int shares=750;
    double price=35.00, percentComm=0.02;
    //declare more variables
    double comm, amtWC, amtNC;

    //Calculate amount without commission
    amtNC = shares*price;
    //Calculate the commission
    comm = amtNC*percentComm;
    //Calculation of amount with commission
    amtWC = amtNC+comm;
    //Display the amount without comm
    cout<<"The amount paid for the stock alone is : $"<<amtNC<<endl;
    //Display the comm amount
    cout<<"The amout of the commission is : $"<<comm<<endl;
    //Display the amount with commission
    cout<<"The total amount paid (for stocks plus commission): $"<<amtWC<<endl;

    return 0;

}