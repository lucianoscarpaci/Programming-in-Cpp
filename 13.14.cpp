/* This program calculates the different sales tax */
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    //declaring string variable
    string month;

    //declaration of variables double type
    double year;
    double totalCollected;
    double stateTax = 0.04, countyTax = 0.02, sales;
    double stateTaxTotal, countyTaxTotal, totalTax;

    //Ask the user to enter the month
    cout << "Enter Month: ";

    //get month line
    getline(cin, month);

    //Ask the user to input year
    cout << "Enter Year: ";
    //Ask the user to input total amount at cash register
    cout << "Enter total amount collected at cash register: $";
    //Calculate sales S = T / 1.06
    sales = totalCollected/1.06;
    //Calculate state tax total 
    stateTaxTotal = sales * stateTax;
    //Calculate total tax
    totalTax = stateTaxTotal + countyTaxTotal;

    //Display month
    cout << "Month: " << month << endl;
    cout << "                        \n";
    //Set precision 2 decimals
    cout << setprecision(2) << fixed;

    //Display total collected
    cout << "Total Collected: " <<setw(10) << "$" << setw(9) << totalCollected << endl;
    //Display sales
    cout << "Sales value: " << setw(14) << "$" << setw(9) << sales << endl;
    //Display county sales
    cout << "County Sales Tax:" << setw(10) << "$" << setw(9) << countyTaxTotal << endl;
    //Display state sales
    cout << "State Sales Tax: " << setw(10) << "$" << setw(9) << stateTaxTotal << endl;
    //Display total sales tax
    cout << "Total Sales Tax: " << setw(10) << "$" << setw(9) << totalTax << endl;

    return 0;
}