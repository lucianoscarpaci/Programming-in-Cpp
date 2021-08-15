#include<iostream>
using namespace std;

int main(){

    //variable initialization
    long fact=1;
    int i;

    /* init the for loop with variable 'i' up to 20
    i. Computes the factorial of the number by the formula
    ii. fact=fact*i
    iii. Print the factorial in tabular form
    iv. end of the 'for' loop.
    */
   for(i=0;i<=20;++i){
       fact=fact*i;
    cout<<i<<"\t\t\t"<<fact<<"\t\t\t"<<endl;
   }
   return 0;
}