#include<iostream>
using namespace std;

int main(){
    //declare variables
    unsigned int i{1};
    unsigned power{1};
    unsigned int y;
    unsigned int x;

    cout<<"Enter the base value: ";
    cin>>x;
    cout<<"Enter the exponent value: ";
    cin>>y;

    while(i<=y){
        power *= x;
        ++x;
    }
    //print the power of numbers
    cout<<"value: "<<power;
    return 0;
}