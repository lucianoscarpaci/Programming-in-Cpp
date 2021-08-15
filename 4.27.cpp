#include<iostream>
using namespace std;

/* Define the main
    initialized the variables
    i. num
    ii. num1
    iii. num2
    iv. rev=0
*/
int main(){
    int num, num1, rev=0, num2;
    //Accept entering 5 digit number
    cout<<"Enter the five-digit number: ";
    cin>>num;
    cout<<endl;
    // Copy original number into num1
    num1=num;
    //computes the reverse of the number
    /* Init the while loop for num !=0
        i. Compute the remainder by formua num2=num%10.
        ii. Compute the reverse of the number by formula rev=rev*10+num2.
        iii. Compute the division by formula num = num/10
    */
    while(num!=0){
        num2=num%10;
        rev=rev*10+num2;
        num /= 10;
    }
    //Checking the palindrome 44444
    if(num1==rev){
        cout<<"Given number is a palindrome.";
    }
    else{
        cout<<"Given number is not a palindrome.";
    }
    return 0;

}