#include<iostream>
using namespace std;

int main()
{
    //declare the variables
    double purchase = 95.00;
    double county_tax = 0.02, state_tax = 0.04;
    //Calc the total
    double total_state = purchase * state_tax;
    double total_county = purchase * county_tax;
    double total_tax = total_state + total_county;
    //Display the total tax for state and county
    cout<<"The total tax for state is : $"<<total_state<<endl;
    cout<<"The total tax for county is : $"<<total_county<<endl;
    cout<<"The total tax for all is : $"<<total_tax;

    return 0;

}