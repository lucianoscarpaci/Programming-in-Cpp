/* This program calculates the selling price of a circuit board and displays result on screen */
#include<iostream>
using namespace std;

int main()
{
    //Define the percent profit
    int PercProfit = 35;
    //Define cost price and selling price
    float CP = 14.95, SP;
    //Display profit percent
    cout<< "Profit percent: "<<PercProfit<<"%"<<endl;
    //Display cost price
    cout<< "Cost price: $"<<CP<<endl;
    //Define formula for calculation of selling price
    SP = ((CP * PercProfit) / 100) + CP;
    //Display selling price
    cout<< "Selling Price: $"<<SP;

    return 0;
}