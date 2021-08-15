//This program calculates income for stadium tickets sold

#include<iostream>
#include<iomanip>
using namespace std;

//main
int main()
{
    //declare variables
    const float A = 15.00, B = 12.00, C = 9.00;
    int a1, b1, c1;
    float ta, tb, tc, income;
    //Ask user for seats sold in each class (A,B,C)

    cout<<endl;
    cout<< "How many class-A tickets were sold?: ";
    cin>>a1;

    cout<< "How many class-B tickets were sold?: ";
    cin>>b1;

    cout<< "How many class-C tickets were sold?: ";
    cin>>c1;
    //Calculate cost per section
    ta = A * a1;
    tb = B * b1;
    tc = C * c1;
    //Calc total income for all seats
    income = ta + tb + tc;
    //Display income generated from ticket sales
    cout<<setprecision(2) << fixed;

    cout<<"Class A seats cost : "<<ta<<endl;
    cout<<"Class B seats cost : "<<tb<<endl;
    cout<<"Class C seats cost : "<<tc<<endl;

    return 0;

}