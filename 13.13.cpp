// This program calculates US dollar amount into yen and euros
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Declaration of variables
    const double YEN_PER_DOLLAR = 100;
    const double EUROS_PER_DOLLAR = 87.98;
    //declare the variable names
    double dollars, yen, euros;
    //set the prescision to two decimal places
    cout << setprecision(2) << fixed;

    //Ask the user to enter dollar amount
    cout << "Enter dollar amount: ";
    cin >>dollars;

    //Convert dollar into yen
    yen = dollars * YEN_PER_DOLLAR;

    //Convert dollar amount to euros
    euros = dollars * EUROS_PER_DOLLAR;

    //Show dollar amount in yen, dollars equals yen
    cout << "$" << dollars << " = " << yen << "Yen \n";
    //Show the dollar amount in euros, dollars equals euros
    cout << "$" << dollars << " = " << euros << "Euros \n";
    return 0;
}