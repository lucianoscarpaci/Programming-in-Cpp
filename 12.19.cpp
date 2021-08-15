/* Annual high temperatures program */
#include<iostream>
using namespace std;

int main()
{
    //declare variables for storing temperatures for three cities
    int tempNYC=85, tempDEN=88, tempPHX=106;
    //declare variables for storing new temp
    double NewNYCtemp, NewDENtemp, NewPHXtemp;
    //Calculate the new temperatures with 2% increase
    NewNYCtemp = tempNYC+(0.02*tempNYC);
    NewDENtemp = tempDEN+(0.02*tempDEN);
    NewPHXtemp = tempPHX+(0.02*tempPHX);
    //Display old and new temps for NY
    cout<<"The average July high temperature in NYC: "<<tempNYC<<endl;
    cout<<"New average July high temperature in NYC: "<<NewNYCtemp<<endl;
    //Display old and new temps for DEN
    cout<<"The average July high temperature in DEN: "<<tempDEN<<endl;
    cout<<"New average July high temperature in DEN: "<<NewDENtemp<<endl;
    //Display old and new temps for PHX
    cout<<"The average July high temperature in PHX: "<<tempPHX<<endl;
    cout<<"New average July high temperature in PHX: "<<NewPHXtemp<<endl;

    return 0;


    
}