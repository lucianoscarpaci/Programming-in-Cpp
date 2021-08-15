#include <iostream>
using namespace std;

/* init the main
    i. num of int type.
    ii. 'i' of int type.
    iii. j of int type.
    iv. temp of int type with value 1.
    v. e of float type with value 1.
*/
int main(){
    int num, i,j,temp=1;
    float e=1.0;

    //Accept the desired accuracy number from the user
    cout<<"Enter the desire accuracy of e: ";
    cin>>num;

    /* Init the for loop with variable 'i' up to num times.
        i. init the for loop with variable 'j' up to num time:
            Computes the value e by the expression.
            i. temp=temp*j.
        ii. End the inner for loop
        ii. compute the final accurate value of e.
        i. e=e+((float)1/temp);
        a. set the value of temp to 1.
        b. end for loop.
    */
   for(i=1;i<=num; i++){
       for(j=1;j<=i;j++){
           temp=temp*j;
       }
       e=e((float)1/temp);
       temp=1;
   }
   cout<<"The value of e is: "<<(float)e;

   return 0;
}