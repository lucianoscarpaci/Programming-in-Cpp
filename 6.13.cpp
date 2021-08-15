//A C++ program to evaluate the rounding numbers
#include<iostream>
//use the math library functions
#include<cmath>
//program uses name from the std name-space
using namespace std;
//rounding floor function
double floorNumber(double);
//the main begins
int main()
{
    //declare the number
    double number;
    //ask user to enter a number to floor rounding
    cout<<"To find out the rounding number"<<endl;
    cout<<"Enter number to floor rounding: ";
    cin>>number;
    //display the rounded number and pass number to function floorNumber
    cout<<"Number entered "<<number<<" rounded to "<<floorNumber(number)<<endl;
    return 0;
}
//function definition of floorNumber
double floorNumber(double number)
{
    return floor(number);
}