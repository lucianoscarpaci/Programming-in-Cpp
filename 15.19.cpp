#include<iostream>
using namespace std;

int main()
{
    //Declare the variables
    double budget;
    double expense;
    double total = 0.0;
    char choice;

    //Enter the budget
    cout<<"Enter the monthly budget\n";
    cin>>budget;

    //Enter the expense
    cout<<"Expenses:\n";

    int i=1;
    /* do-while loop to iterate until user enters N or n as a choice */
    do
    {
        //Enter the expenses
        cout<<"Enter expense number "<<i<<":";
        cin>>expense;

        //Add all the expenses
        total += expense;

        //Enter the choice for adding more expenses
        cout<<"Are there any other expenses: ";
        cin>>choice;

        //Get the new expenses
        i++;
    } while(choice != 'N' && choice != 'n');
    
    //Check whether total is more than budget or not with if-else blocks
    if(total < budget)
    {
        cout<<"You have $"<<(budget-total)<<" under budget.\n";
    }
    else if (total>budget)
    {
        cout<<"You have $"<<(total-budget)<<" over budget.\n";
    }
    else
    {
        cout<<"Budget and expenses are equal";
    }

    return 0;
}