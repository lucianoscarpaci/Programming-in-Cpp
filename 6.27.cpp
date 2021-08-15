#include<iostream>
using namespace std;
//function prototype
double smallest(double, double, double);
//main
int main(){
    double i, j, k;
    //output enter first, second, third ijk
    //accept three numbers from user
    cout<<"Enter first number: ";
    cin>>i;
    cout<<"Enter second number: ";
    cin>>j;
    cout<<"Enter third number: ";
    cin>>k;
    cout<<"The smallest number is: "<<smallest(i, j, k)<<endl;
    return 0;
}
double smallest(double i, double j, double k)
{
    //declare local variable
    double small;
    small = i;
    //if(first > second)
    if(i > j)
        //if(second > third)
        if(j > k)
        //small = third;
        small = k;
    //else
    else
        //small = second;
        small = j;
    //else
    else
        //if(first > third)
        if(i > k)
            //small = third
            small = k;
    //return small
    return small;

}