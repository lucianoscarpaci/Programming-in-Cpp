/* This program finds the length area and width */
#include<iostream>
#include<iomanip>
using namespace std;

//Prototypes
double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

int main()
{
    //Calling functions in order:
    // 1. Get the length and width
    double length = getLength();
    double width = getWidth();
    // 2. Compute the area using the values of length and width
    double area = getArea(length, width);
    //3. Display the results in a message
    displayData(length, width, area);

    return 0;
}
//get the length from the user
double getLength()
{
    double length;

    cout<<"User enter the length: ";
    cin>>length;

    return length;
}
double getWidth()
{
    double width;

    cout<<"User enter the width: ";
    cin>>width;

    return width;
}
double getArea(double length, double width)
{
    //formula to get the area
    return length * width;
}
void displayData(double length, double width, double area)
{

    cout<<fixed<<showpoint<<setprecision(2);

    //Display the values with left-alligned values
    cout<<left<<setw(6)<<"Length"<<": "<<length<<endl;
    cout<<left<<setw(6)<<"Width"<<": "<<width<<endl;
    cout<<left<<setw(6)<<"Area"<<": "<<area<<endl;
}