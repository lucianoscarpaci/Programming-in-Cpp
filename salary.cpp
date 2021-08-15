#include<iostream>
#include<iomanip>
using namespace std;


//Define the main method
int main(){
//init the variables
double salary, hours, rate;
//set the total salary to 0
double totSalary=0;

//Accept the number of hours worked from the user
cout<<"\nEnter hours worked (-1 to end): ";
cin>>hours;
//Initialized the while loop with condition hours is not equal to -1
while(hours!=-1){
//Accept the hourly rate from the user
cout<<"Enter the hourly rate of the employee:";
cin>>rate;
//check if the hours are less than equal to 40
if(hours<=40){
//compute the salary
//salary=hours*rate
salary=hours*rate;
//print the salary with prescision to 2
cout<<"Salary is $"<<setprecision(2)<<fixed<<salary<<endl;
}
//otherwise
else{
//Computes the salary with overtime
//salary=(40*rate)+((hours-40)*rate*1.5)
//Print the salary with prescision to 2
totSalary=(40*rate)+((hours-40)*rate*1.5);
cout<<"Salary is $"<<setprecision(2)<<fixed<<totSalary<<endl;
}
cout<<"\nEnter hours worked (-1 to end): ";
cin>>hours;
}
return 0;
}

