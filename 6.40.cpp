//C++ program to visualize recursion using factorial function
#include<iostream>
#include<iomanip>
using namespace std;
//prototype
unsigned long factorial(unsigned long);
//main
int main()
{
    //iterate and calculate the factorials 0 through 10
    for(unsigned int counter=0;counter<=10;++counter){
        cout<<"Calculating factorial("<<counter<<")"<<endl;
        unsigned long result = factorial(counter);
        cout<<setw(2)<<counter<<"! = "<<result<<endl;
    }
}
//The factorial function to evaluate the factorial
unsigned long factorial(unsigned long number)
{
    if(number<=1)
    {
        cout<<"Reached base case 1"<<endl;
        return 1;
    }
    else
    {
        cout<<setw(number * 3)<<""<<"local variable number"<<number<<endl;
        cout<<setw(number * 3)<<""<<"recursively calling factorial("<<number-1<<")"<<endl;
        //return the factorial of the given number
        return (number * factorial(number - 1));
    }
}