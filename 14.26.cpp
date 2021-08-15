/* The program calculates a customer's monthly
amount due, and the money saved if they purchased */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    char pkg;
    double gb, amount, amountB, amountC;

    //Display the message and take input
    cout <<"Enter the package: "<<endl;
    cin>>pkg;

    cout<<"Gigabytes used: "<<endl;
    cin>>gb;

    //If a customer purchases package A
    if(pkg == 'a' || pkg == 'A')
    {
        amount = 39.99;
        if(gb > 4)
            amount = amount + (gb-4)*10;
            cout <<"The total amount due is: $"<<amount<<endl;

            //The savings if customer had bought package B
            amountB = 59.99;
        
        if(gb > 8)
            amountB = amountB + (gb - 8) * 5;
        
        if(amountB < amount)
        {
            cout<<"Customer could have saved $"<<amount-amountB<<" if package B was purchased.";
            cout<<endl;
        }
        //The savings if the customer purchased package C
        amountC = 69.99;

        if(amountC < amount)
        {
            cout<<"Customer could have saved $"<<amount-amountC<<" if package C was purchased.";
        }
    }
    //If a customer purchases package B
    else if(pkg == 'b' || pkg == 'B')
    {
        amount = 59.99;
        if(gb > 8)
            amount = amount + (gb -8) * 5;
            cout <<"The total amount due is: $"<<amount<<endl;

            //The savings if customer purchases package C
            amountC = 69.99;
        if(amountC < amount)
        {
            cout <<"Customer could have saved $"<<amount-amountC<<"if package C was purchased.";
            cout<<endl;
        }
    }
    //If customer purchases package C
    else if(pkg == 'C' || pkg == 'C')
    {
        amount = 69.99;
        cout <<"The total amount due is: $"<<amount<<endl;
    }
    //if user entered wrong package
    else
    {
        cout <<"Invalid input for package. Try again.";
    }

    return 0;
}