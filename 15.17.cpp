/* This program displays a bar graph for 
each sale in five stores. */
#include<iostream>
using namespace std;

int main()
{
    //Declare the variables
    int sales1;
    int sales2;
    int sales3;
    int sales4;
    int sales5;

    //Take input for the sales in the respective stores
    cout<<"Enter today's sales for store 1: ";
    cin>>sales1;

    cout<<"Enter today's sales for store 2: ";
    cin>>sales2;

    cout<<"Enter today's sales for store 3: ";
    cin>>sales3;

    cout<<"Enter today's sales for store 4: ";
    cin>>sales4;

    cout<<"Enter today's sales for store 5: ";
    cin>>sales5;

    cout<<"\nSALES BAR CHART\n";
    cout<<"(Each * = $100)\n";
    cout<<"Store 1: ";

    //for loop to print the symbol
    for(int i=0; i<(sales1/100); i++)
    {
        cout<<"*";
    }

    cout<<endl;
    cout<<"Store 2: ";

    //For loop to print the symbol
    for(int i=0; i < (sales2/100); i++)
    {
        cout<<"*";
    }

    cout<<endl;
    cout<<"store 3: ";

    //For loop to print the symbol
    for(int i=0; i<(sales3/100); i++)
    {
        cout<<"*";
    }

    cout<<endl;

    cout<<"Store 4: ";

    for(int i=0; i < (sales4/100); i++)
    {
        cout<<"*";
    }

    cout<<endl;

    cout<<"Store 5: ";

    for(int i=0; i < (sales5/100); i++)
    {
        cout<<"*";
    }

    cout<<endl;

    return 0;
}