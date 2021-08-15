/* Program to calculate total annual pay for an employee */
#include<iostream>
using namespace std;

//The main
int main()
{
    //declare the variables
    double payAmount = 2200.0, payPeriods = 26;
    double annualPay = payAmount * payPeriods;

    //Print the result
    cout << "Total annual pay = $" << annualPay<<endl;

    return 0;
}