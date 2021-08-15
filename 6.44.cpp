//C++ program to remove limitations of non-negative numbers
#include<iostream>
using namespace std;
//function prototype
int mystery(int,int);
//the main
int main()
{
    int x=0;
    int y=0;
    cout<<"Enter the first integer: "; cin>>x;
    cout<<"Enter the second integer: "; cin>>y;
    //print results
    cout<<"The result is: "<<mystery(x,y)<<endl;
    return 0;
}
//Define mystery function
int mystery(int a, int b)
{
    //tests the condition
    if(1 == b)
    {
        //base case
        return a;
    }
    else
    {
        //recursion step
        return a + mystery(a,b-1);
    }
}