#include<iostream>
using namespace std;

int main(){
//Initialize passes to zero
unsigned int passes = 0;
//Initialize failures to zero
unsigned int failures = 0;
//Initialize student counter to one
unsigned int studentCounter = 1;

//While student counter is less than or equal to 10
while(studentCounter <= 10){
    //prompt the user to enter the next exam result
    cout << "Enter the next exam result";
    //Input the next exam result
    int result;
    cin >> result;

    //if the student passed
    if(result == 1){
        //add one to passes
        passes += 1;
    }
    //else
    else{
        //add one to failures
        failures += 1;


    // Add one to student counter
    studentCounter += 1;
    }
//Print the number of passes
cout << "Passed: " << passes << endl;
//Print the number of failures
cout << "\nFailed: " << failures << endl;
//if more than eight students passed
if (passes > 8) {
    cout << "Bonus to instructor!"<<endl;
}
    //Print "Bonus to instructor!"
