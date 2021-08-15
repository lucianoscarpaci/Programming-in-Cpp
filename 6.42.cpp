//C++ program to find the distance between two points
#include<iostream>
#include<cmath>
using namespace std;
//function definition to calc the distance
double distance(double x1, double y1, double x2, double y2)
{
    //evaluate the distance and return the values
    return sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
}
//the main
int main()
{
    //declare variables
    double x1, y1;
    double x2, y2;
    //accept the values for the first points
    cout<<"Enter coordinates of first point:"<<endl;
    cout<<"Enter the value of x1: "; cin>>x1;
    cout<<"Enter the value of y1: "; cin>>y1;

    cout<<endl<<"Enter the value of x2: "; cin>>x2;
    cout<<"Enter the value of y2: "; cin>>y2;
    //output the distance
    cout<<"Distance between the points is: "<<distance(x1,y1,x2,y2)<<endl;
    return 0;
}