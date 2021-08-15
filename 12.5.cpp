//This program calculates the average of entered values
#include<iostream>
using namespace std;

int main()
{
    //Declare the variables
    int z = 28, x = 32, c = 37, v = 24, b = 33;
    int add = z + x + c + v + b;
    //Calc the average
    double avg = add / 5.0;
    //display the average
    cout<<"The average is :"<<avg<<endl;

    return 0;
}