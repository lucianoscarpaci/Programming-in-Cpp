/* This program calculates the total sum of the numbers given by the user */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    int upperBound, sum=0;
    //Display message to enter number from user
    cout<<"Enter the last number to sum up :";
    cin>>upperBound;

    //Input validation
    while(upperBound < 0)
    {
        //Display message to enter positive number only
        cout<<"Enter a positive number only:";
        cin>>upperBound;
    }
    //for loop to calculate the sum from 1 until given number
    for(int i=1; i <= upperBound; i++)
    {
        //calc the sum
        sum += i;
    }
    //Display the calculated sum
    cout<<"The sum of numbers between 1 and "<<upperBound<<" is :"<<sum<<endl;

    return 0;

}