//This program calculates average test score

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //declare const
    const int TESTS = 5;
    //declare vars
    float t1, t2, t3, t4, t5, avg, t;

    //display message about what program does
    cout << "\nCalculate the average of ";
    cout << "5 test scores.\n";
    //Ask the user to enter 5 test scores
    cout << "Enter the score for test 1: ";
    cin>>t1;
    cout<< "Enter the score for test 2: ";
    cin>>t2;
    cout<<"Enter the score for test 3: ";
    cin>>t3;
    cout<<"Enter the score for test 4: ";
    cin>>t4;
    cout<<"Enter the score for test 5: ";
    cin>>t5;

    //calc the total
    double total = t1 + t2 + t3 + t4 + t5;
    //Calc the average
    avg = total / TESTS;

    //use set precision to make number fixed-point
    cout<<setprecision(1)<<endl;
    //Display the average test score
    cout<<"\nThe average test score is: "<<avg<<endl;

    return 0;
}