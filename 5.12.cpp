#include<iostream>
using namespace std;

/* Define main
a. set the prod=1
b. set counter=1
*/

int main(){

    //declare variables
    int counter=1,prod=1;

    /* Init the while loop for 1 to 15.
    Computes the product of integers
    from 1 to 15.
    a. prod=prod*counter
    b. Increment the counter by 1
    c. End while loop
    */
   while(counter<=15){
       prod *= counter;
       counter+=2;
   }
   cout<<"The product of odd integers from 1 to 15 is: "<<prod<<endl;
   return 0;
}