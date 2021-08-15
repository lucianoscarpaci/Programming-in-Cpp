#include<iostream>
using namespace std;
//function prototype
int integerPart(int, int);
int integerRemainder(int, int);
int seperate(int);

int main()
{
    int a,b;
    cout<<"Enter the first integer: "
    cin>>a;
    cout<<"Enter the second integer: "
    cin>>b;
    cout<<"integer part of the quotient is: "<<integerPart(a,b)<<endl;
    cout<<"integer remainder is: "<<integerRemainder(a,b)<<endl;

}

int integerPart(int a, int b)
{
    return (a / b) * b;
}
int integerRemainder(int a, int b)
{
    return a % b;
}
int seperate(int i)
{
    if(i >= 10000)
    {
        cout<< i/10000 << "  ";
        i = i % 10000;
    }
    if(i >= 1000)
    {
        cout << i/1000 << "  ";
        i = i % 1000;
    }
    if(i >= 100)
    {
        cout << i/100 << "  ";
        i = i % 100;
    }
    if(i >= 10)
    {
        cout << i/10 << "  ";
        i = i % 10;
    }
    cout << i;
}