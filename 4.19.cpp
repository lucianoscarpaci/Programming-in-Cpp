#include<iostream>
using namespace std;
// Define the main method:
int main(){
/*a. Initialized the variables
b. Set the largest1=0
c. Set the largest2=0
d. Set counter=0
*/
int number, counter=0, largest1=0, largest2=0;
cout<<"Enter 10 numbers one by one: "<<endl;
/*e. Initialized the while loop with condition counter is less than 10.
    i. Accept the number from the user.
    ii. Check if the number is greater than the largest number.
        i. Set the largest number.
            i. Largest number = input number.
    iii. Check if the largest 1 is greater than largest 2 then
        i. Swap the number.
*/
while(counter<10){
    cin>>number;
    if(number>largest1){
        largest1=number;
    }
    if(largest1>largest2){
        number=largest2;
        largest2=largest1;
        largest1=number;
    }
    counter++;
}
cout<<"The largest number is: "<<largest2<<endl;
count<<"The second largest number is: "<<largest1<<endl;
    /*iv. Increment the counter variable by 1.
    v. End while loop
    vi. Print the largest number.
    vii. Print second largest number.
f. close the main method.
*/
return 0;
}
