//This program converts temperature in Celsius to Fahrenheit.
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Variable declaration
    double C,F;

    cout<<endl;
    //Display message
    cout<< "Celsius" "\t\t" "Fahrenheit\n"<<endl;

    //Using for loop for displaying temperatures in range 0 to 20
    for(C = 0; C <= 20; C++)
    {
        //Formula used for calculation
        F = (9/5 * C) + 32;

        //Display output
        cout<<right<<setw(4)<< C <<" *C";
        cout<<setw(8)<<"=";
        cout<<setw(12)<< F <<"*F" <<endl;
    }
    cout<<endl;

    return 0;
}