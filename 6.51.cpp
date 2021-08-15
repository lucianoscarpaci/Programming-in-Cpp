//C++ program to determine smaller of two arguments

#include<iostream>
using namespace std;
//template minimum
template <class T>
//test conditions and find smallest value
T minimum(T value1, T value2)
{
    if(value1 < value2)
        return value1;
    else
        return value2;
}
//main
int main()
{
    if(value1 < value2)
        return value1;
    else
        return value2;
}
//main begins
int main()
{
    //declare variables
    int int1 = 0;
    int int2 = 0;
    //output enter the first integer: 
    cout<<"Enter the first integer: "; cin>>int1;
    cout<<"Enter the second integer: "; cin>>int2;
    //invoke int version of minimum
    cout<<"The smaller integer value is: "; minimum(int1, int2)<<endl<<endl;
    return 0;
    }
