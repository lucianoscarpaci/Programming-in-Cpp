/* This program calculates total purchases made by a customer in a store */
#include<iostream>
using namespace std;

int main()
{
    //Declare the variables that hold price of five items
    double a1=15.95, a2=24.95, a3=6.95, a4=12.95, a5=3.95;
    //Calculate the sub total
    double subTotal = a1+a2+a3+a4+a5;
    //Calculate the sales tax
    double salesTax = subTotal*0.07;
    //Calculate the total value
    double total = subTotal + salesTax;

    //Display items price
    cout<< "The cost of the first item is $"<<a1<<"."<<endl;
    cout<< "The cost of the second item is $"<<a2<<"."<<endl;
    cout<< "The cost of the third item is $"<<a3<<"."<<endl;
    cout<< "The cost of the fourth item is $"<<a4<<"."<<endl;
    cout<< "The cost of the fifth item is $"<<a5<<"."<<endl;

    //Display subtotal amount
    cout<<"The subtotal of the sales: $"<<subTotal<<endl;
    //Display amount of sales tax
    cout<<"The amount of sales tax: $"<<salesTax<<endl;
    //Display the total
    cout<< "Total cost of the items = $"<<total<<"\n";

    return 0;

}