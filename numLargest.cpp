#include<iostream>
using namespace std;
//Define the main method:
int main(){
//initialized the variables
int number, counter=0, largest=0;
//set the largest=0

///set the counter=0
cout<<"Enter 10 number one by one: "<<endl;
//Initialized the while loop with condition counter is less than 10
while(counter<10){
//Accept the number from the user
cin>>number;
++counter:
//compare the numbers
if(number>largest){
    largest=number;
}
}
//End while loop

//Print the largest number
cout<<"The largest number is: "<<largest<<endl;
//return
return 0;
}