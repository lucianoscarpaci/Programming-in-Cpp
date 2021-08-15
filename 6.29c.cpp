//C++ program to find primes between 2 and 100,000.
#include<iostream>
#include<cmath>
using namespace std;
//primenumber function
int primeNumber(int);
//main
int main()
{
    //iterate over 100,000
    for(int x = 1; x <= 100000; x += 2)
    {
        //if x ==prime number function call it
        if(x == primeNumber(x))
            //output the number
            cout<<"The number is: "<<x<<endl;
    }
    return 0;
}
//evalueate prime
int primeNumber(int x)
{
    //set prime = 0
    int prime = 0;
    //iterate j = 2 j < sqrtx
    for(int j = 2; j < sqrt(x); j++)
    {
        if(x % j == 0)
            prime++;
    }
    if(prime == 0)
        return x;
}