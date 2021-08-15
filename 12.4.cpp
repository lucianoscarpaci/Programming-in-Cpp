#include<iostream>
using namespace std;

int main()
{
    //Declaration of variables
    float purchase = 88.67;
    float tax_amount, tip_amount, total_bill;
    //initialize variables
    tax_amount = 0.0675 * purchase; 
    tip_amount =  0.20 * purchase;
    total_bill = tax_amount + tip_amount + purchase;
    //Display meal cost, tax amount, tip amount, total bill
    cout<<"The meal cost is $"<<purchase<<endl;
    cout<<"The tax amount is $"<<tax_amount<<endl;
    cout<<"The tip amount is $"<<tip_amount<<endl;
    cout<<"The total bill is $"<<total_bill<<endl;

    return 0;
}