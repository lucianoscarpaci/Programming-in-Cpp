//C++ program to find the greatest common divisor for both nums
#include<iostream>
using namespace std;

//function definition
int gcd(int a, int b)
{
    //tests the conditions
    if(b == 0)
    {
        return a;
    }
    //evaluate the GCD
    else
    {
        return gcd(b, a % b);
    }
}
//main begins here
int main()
{
    //declare variable
    int a,b;
    //accept two numbers
    cout<<"Enter the first number:";cin>>a;
    cout<<"Enter the second number:";cin>>b;
    cout<<"The GCD is: "<<gcd(a,b)<<endl;

    return 0;
}