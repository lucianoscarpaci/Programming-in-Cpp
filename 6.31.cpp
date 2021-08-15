//C++ program to return the gcd of two numbers
#include<iostream>
using namespace std;
//function prototype
int gcd1(int, int);
//main
int main()
{
    //init a and b
    int a, b;
    //output enter first and second number
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    //output gcd and call gcd
    cout<<"Greatest common divisor is: "<<gcd1(a,b)<<endl;
    return 0;
}
//Evaluate the GCD
int gcd1(int a, int b)
{
    //if both a and b are equal
    if(a == b)
        return a;
    //while b != 0 or a != 0
    while(b != 0 || a != 0)
    {
        if(b != 0)
        {
            a %= b;
        }
        else
            return a;
        if (a != 0)
        {
            b %= a;
        }
        else
            return b;
    }

}