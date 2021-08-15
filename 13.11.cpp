//This program calculates monthly expenses and annual expenses
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    double loan, ins, gas, oil, tires, maintenance;
    double totalMonthly, totalAnnualy;

    //Ask user to enter monthly loan payment
    cout<<"Enter the monthly loan payment: $ ";
    cin>>loan;
    //Ask user to enter monthly insurance
    cout<<"Enter the monthly insurance: $ ";
    cin>>ins;
    //Ask user to enter monthly gas expenses
    cout<<"Enter the monthly gas: $ ";
    cin>>gas;
    //Ask the user to enter monthly tires
    cout<<"Enter the monthly tires: $ ";
    cin>>tires;
    //Ask the user to enter monthly oil
    cout<<"Enter the monthly oil: $ ";
    cin>>oil;
    //Ask the user to enter montly maintenance
    cout<<"Enter the monthly maintenance: $ ";
    cin>>maintenance;
    //Calc the monthly expenses
    totalMonthly = loan + ins + gas + tires + oil + maintenance;
    //Calc the Annual expenses
    totalAnnualy = totalMonthly * 12;
    //Display total monthly and annual expenses by cout
    cout<<"Your total monthly expenses are: $ "<<totalMonthly<<endl;
    cout<<"Your total annual expenses are: $ "<<totalAnnualy<<endl;

    return 0;
}