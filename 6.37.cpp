#include<iostream>
using namespace std;

int fibonacciLoop(int);

int main()
{
    int number;
    //output enter the number
    cout<<"Enter the number: ";
    cin>>number;
    //output the result and call fibonacci loop
    cout<<"The result is: "<<fibonacciLoop(number);
    return 0;
}
int fibonacciLoop(int Number)
{
    //declare previous previous
    int prev_prev_number;
    int prev_number = 0, current_number = 1;
    //iterate up to the number
    for (int i = 1; i < Number; i++)
    {
        prev_prev_number = prev_number;
        //assign current number into previous
        prev_number = current_number;
        //add both prevs into current
        current_number = prev_prev_number + prev_number;
    }
    //return current
    return current_number;
}