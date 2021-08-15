#include<iostream>
using namespace std;

/* Initialize the main
  i. long long num
  ii. dnum=0
  iii. i=0
  iv. Rem
*/
int main(){
    long long num;
    int rem, dnum=0, i=0;

    //Accept the binary
    cout<<"Enter the binary number in form of 0 and 1: ";
    cin>>num;
    /* Init the while loop for when num != 0
        i. compute the remainder by rem=num%10
        ii. compute the division by formula num=num/10
        iii. computes decimal equivalent of binary number
            decimal num = decimal num+remainder*pow(2,i).
        iv. Print the decimal num
    */
    while(num!=0){
        rem=num%10;
        num=num/10;
        dnum=dnum+rem*pow(2,i);
        ++i;
    }
    cout<<"The equivalent decimal is: "<<dnum;
    return 0;
}
