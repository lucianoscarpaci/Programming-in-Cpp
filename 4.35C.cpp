#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

/* Init the main
    i. num of double type.
    ii. 'i' of int type.
    iii. 'j' of int type.
    iv. temp of double type with value 1.
    v. temp1 of double type.
    vi. num1 of double type.
*/
int main(){
    double num, temp=1, temp1, num1;
    int i, j;
    //Accept the value of 'x' from the user
    cout<<"Enter the value of x to compute e^x: ";
    cin>>num;
    cout<<endl;

    for(i=1;i<=100;i++){
        for(j=1;j<=i;j++){
            temp=temp*j;
        }
        temp1=pow(num,i);
        num1=num1+temp1/temp;
    }
    cout<<setprecision(10)<<"The value of e^x is: "<<num1+1;

    return 0;
}