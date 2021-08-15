
#include<iostream>
using namespace std;


/* Define the main method:
a. Init the variables
b. Set the passes=0
c. Set the failures=0
d. Set studentCounter=1
*/
int main(){
    unsigned int passes{0};
    unsigned int failures{0};
    unsigned int studentCounter{1};
    int result;

/*e. Initialized the while loop with condition studentCounter
less than or equal to 10.
 i. Accept the number from the user
 ii. Check if the number is equal to 1 then:
        i. increment the number of passes
iii. Check if the number if equals to 2 then:
        i. increment the number of failures
iv. Otherwise
        i. Print the message of incorrect input.
        ii. Decrement studentCounter by 1
    
*/
while(studentCounter<=10){
    cout<<"Enter result (1 = pass, 2 = fail): ";
    cin>>result;
        if(result == 1){
            passes += 1;
        }
        else if(result == 2){
            failures += 1;
        }
        else{
            cout<<"\nIncorrect input! Try again with a 1 or 2\n";
            studentCounter--;
        }
//increment studentCounter so loop eventually terminates
studentCounter += 1;
}
/* Print the number of passed inputs 
    Print the number of failures
    Check if the number of passes is less than 8 then:
    Print the message to the instructor
*/
cout<<"Passed: "<<passes<<"\nFailed: "<<failures<<endl;
if(passes>8){
    cout<<"Bonus to instructor!"<<endl;
}
return 0;
}
