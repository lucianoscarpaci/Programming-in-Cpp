//Passbyvalue passbyreference program
#include <iostream>
using namespace std;

//function declaration
int tripleByValue(int);
void tripleByReference(int &);
//main
int main()
{
    //declare variable
    int count;
    //ouput enter the radus
    cout<<"Enter the value of count: "; cin>>count;
    cout<<"The value of count after call by value is: "<<tripleByValue(count)<<endl;
    cout<<"The value of count after call by reference is: "<<tripleByReference(count)<<endl;
    return 0;
}
int tripleByValue(int value)
{
    return value*value;
}
//pass by reference
void tripleByReference(int &valueReference)
{
    valueReference *= 4;
}
