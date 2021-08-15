//C++ program that determines whether an integer is even or odd

#include<iostream>
using namespace std;

//function prototype
bool even(int);
//global variable
int i;
int main(){

    cout<<"Determine whether an integer is even or not."<<endl;
    //accept integer from user
    cout<<"Enter the integer";
    cin>>i;
    //While i is not equal to 100
    while(i != 00)
    {    
        //call even function
        cout << even(i) <<endl;
        //ask ever to enter 00 to end
        cout<<"Enter 00 to end up the list"<<endl;
        //accept value i
        cout<<"Enter integer: ";
        cin >> i;
    }

return 0;
}


bool even(int i)
{
    if( i % 2 == 0)
        return true;
    else
        return false;
}