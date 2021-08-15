//C++ program to evaluate quality points for grades
#include<iostream>
using namespace std;
//prototype
int qualityPoints(int);

int main()
{
    //declare average
    int average;
    //output student average from 0 to 100
    cout << "Enter the student's average(between 0 and 100): ";
    cin >> average;
    //tests the value
    //iterate if mark does not exist between 0 to 100
    while(average < 0 || average > 100)
    {
        cout <<"Enter student's average(between 0 and 100): ";

    }
    //ouput qualitypoints function
    cout << qualityPoints(average);
    return 0;
}
//function to evaluate quality points
int qualityPoints(int average)
{
    //Tests the conditions
    if(average >= 90)
        return 4;
    else if(average >= 80)
        return 3;
    else if(average >= 70)
        return 2;
    else if(average >= 60)
        return 1;
    else
        return 0;
}