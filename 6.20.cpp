#include<iostream>
using namespace std;
//function prototype
bool multiple(int,int);
int main(){
    //declare first and second values
    int first, second;
    //ask user to enter first and second value
    cout<<"Enter the first value: ";
    cin>>first;
    cout<<"Enter the second value: ";
    cin>>second;
    //test the values
    if (multiple(first,second) == true)
        cout << second << " is multiple of " << first;
    else
        cout << second << " is not a multiple of " << first;
    return 0;
}
//evaluate the multiple function
bool multiple(int first, int second)
{
    //declare the remainder
    int remainder;
    remainder = first % second;
    //the conditions and returns true or false
    if (remainder == 0)
        return true;
    else
        return false;
}