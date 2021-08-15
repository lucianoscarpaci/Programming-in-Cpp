/* This program takes two numbers and determines which number
is higher or lower */
#include<iostream>
using namespace std;

int main()
{
    //Declare the variables
    double n1, n2, s, l;

    //Enter n1 and n2
    cout<< "Please enter the two numbers: "<<endl;
    cin>>n1>>n2;

    //Use conditional operation
    s = (n1 < n2)? n1 : n2;

    cout << "The smaller number is: "<<s<<endl;

    //Use conditional to determine largest
    l = (n1 < n2)? n2 : n1;
    cout << "The larger number is: "<<l<<endl;
    return 0;
}