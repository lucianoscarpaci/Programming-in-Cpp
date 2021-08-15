#include<iostream>
using namespace std;

/* Init the main method
    init variables
    i. num of unsigned int type.
    ii. fact of unsigned long long type.
    iii. 'i' of int type.
*/
int main(){
    unsigned int num;
    unsigned int fact=1;
    int i;
    /* Accept the positive integer from the user
    a. Initialize the for loop with variable 'i' up to num times
    b. Computes the factorial of the number by the formula:
        i. fact=fact*i
    c. end the for loop
    d. print the factorial of the number.
    */
   cout<<"Enter a positive integer: ";
   cin>>num;
   cout<<endl;
   for(i=1;i<=num;++i){
       fact=fact*i;
   }

   cout<<"The factorial of the number is: "<<fact;

   return 0;
}