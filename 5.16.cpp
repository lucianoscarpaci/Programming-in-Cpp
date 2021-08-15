#include<iostream>
using namespace std;

/* init main
i. num
ii. i
iii. j
*/
int main(){
    int num, i, j;
    cout<<"Enter the five integers between 1 to 30: "<<endl;
    
   for(i=1;i<=5;i++){
       cout<<"\nEnter "<<i<<" number"<<endl;
       cin>>num;
       /* initialized the for loop with j
    from 1 to number from user
        i. Print the asterisk
        ii. End inner loop.
        iii. Change the line with print function
        iv. End the outer loop
    */
       for(j=1;j<=num;j++){
           cout<<"*";
       }
       cout<<endl;
   }
   return 0;
}