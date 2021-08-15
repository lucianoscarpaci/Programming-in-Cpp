#include<iostream>
using namespace std;

//function prototype
void primeNumber(int);
//main begins
int main()
{
    //declare i
    int i;
    //ask user to enter a number
    cout<<"Enter an integer: ";
    cin>>i;
    //call the prime function
    primeNumber(i);
    return 0;
}
void primeNumber(int i)
{
    //initialize prime as 0
    int prime = 0;
    //iterate j = 2
    for(int j = 2l j<i; j++)
    {
        //if(i % j == 0)
        if(i % j == 0)
            //increment prime
            prime++;
    }
    //if prime greater than zero
    if(prime > 0)
        //output integer != prime
        cout << "The integer is not prime";
    //else
    else
        //output integer is prime
        cout << "The integer is prime";
}