//This program calculates the senior citizen property tax
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //declare constant variables
    const float ASSESSMENT_PER = 0.60;
    const int FIVE_THOUSAND = 5000;
    const int HUNDRED = 100;
    const int FOUR = 4;

    //variables declaration
    float value_of_property, current_tax_rate, total_annual_property_tax;
    float quarterly_tax_bill;

    //Ask the user to enter the value of property
    cout<<"               "<<endl;
    cout<<"What is the value of the property?";
    cin>>value_of_property;
    //Ask the user about current tax rate
    cout<<"What is the current tax rate?";
    cin>>current_tax_rate;
}