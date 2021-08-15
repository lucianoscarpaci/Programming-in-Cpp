/* This program takes user input for lengths and widths */
#include<iostream>
using namespace std;

int main()
{
    //Variable declarations
    int length1, width1;
    int width2, length2;
    int areaA, areaB;

    //Display message to enter length/width for rectangle A
    cout<<"Enter the length and width for Rectangle A : \n";
    cin>>length1>>width1;

    //Calculate the area of rectangle A
    areaA = length1*width1;

    //Display message to enter length/width for Rectangle B
    cout<<"Enter the length and width for Rectangle B : \n";
    cin>>length2>>width2;

    //Calculate the area of rectangle B
    areaB = length2*width2;

    //If statement to check whether Area of Rectangle A is greater than B
    if(areaA>areaB)
    {
        cout<<"Area of Rectangle A"<<" ("<<areaA<<") "<<"is greater than area";
        cout<<" Rectangle B"<<" ("<<areaB<<") "<<endl;
    }
    else if(areaA<areaB)
    {
        cout<<"Area of Rectangle A"<<" ("<<areaA<<") "<<"is equal to area of";
        cout<<" Rectangle B"<<" ("<<areaB<<") "<<endl;
    }

    return 0;
}