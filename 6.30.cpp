//C++ program to find the reverse of a number
#include<iostream>
#include<cmath>
using namespace std;
int reverse(int);
//the main begins
int main()
{
    //declare i
    int i;
    //output enter an integer
    cout << "Enter an integer: ";
    //accept i
    cin >> i;
    //output reversed digit is, call reverse
    cout<<"Reversed digit is: "<<reverse(i);
    return 0;
}
int reverse(int i)
{
    //set digit count to zero
    int digitsCount = 0;
    //iterate digits = 1 multiply 10 to digits
    for(int digits = 1; digits <= i; digits *= 10)
    {
        //increment digitscount
        digitsCount++;
    }
    //set x to zero
    int x = 0;
    //declare a = digit count
    int a = digitsCount;
    //iterate j = 1 j <= digit count j++
    for(j = 1; j <= digitsCount; j++)
    {
        //decrement a
        a--;
        //use pow
        x += (i % 10) * pow(10,a);
        // divide i /= 10
        i /= 10;
    }
    //return x
    return x;
}

