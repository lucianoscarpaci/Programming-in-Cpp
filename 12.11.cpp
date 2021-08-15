/* Program to calculate the distance the car can travel in town and on highway. */
#include<iostream>
using namespace std;

int main()
{
    //Declare the variables
    const int gastank = 20;
    float averagetown = 23.5;
    float averagehighway = 28.9;
    //Calculate both distances
    float distance = averagehighway*gastank;
    float distance_1 = averagetown*gastank;
    //Print the result
    cout<<"The car has "<<gastank<<" "<<"gallons of gas."<<endl;
    cout<<"The distance the car travels in the town is "<<distance<<" miles."<<endl;
    cout<<"The distance the car travels on the highway is "<<distance_1<<" miles."<<endl;

    return 0;

}