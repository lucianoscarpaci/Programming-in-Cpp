//This program calculates property tax from the actual property value
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Constant Variable declarations
    const float ASSESSMENT_PER = 0.60;
    const float PROPERTY_TAX_PER = 0.75;
    const float HUNDRED = 100;

    //Variable declaration
    float total_assessment_value, total_property_tax,
    value_of_property;

    cout<<endl;

    //Ask user to enter the actual property value
    cout<< "What is the actual value of a property?";
    cin>>value_of_property;

    //Calculate total assessment value
    total_assessment_value = value_of_property * ASSESSMENT_PER;

    //Calculate total property tax
    total_property_tax = (total_assessment_value / HUNDRED) * PROPERTY_TAX_PER;

    //Set precision
    cout<<setprecision(2) << fixed << right << endl;

    cout<< "Property Value:     ";
    cout<<setw(12) <<"$"<<value_of_property<<endl;
    //Display assessment value
    cout<< "Assessment value:   ";
    cout<<setw(12) <<"$"<<total_assessment_value<<endl;
    //Display property tax
    cout<< "Property Tax:    ";
    cout<<setw(12) <<"$"<<total_property_tax<<endl;

    cout<<endl;
    return 0;
}