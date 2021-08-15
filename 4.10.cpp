#include <iostream>
using namespace std;

int main(){
    //initialization phase
    //Set total to zero
    int total = 0;
    //Set grade counter to one
    unsigned int gradeCounter = 1;

    //while grade counter is less than or equal to ten
    while (gradeCounter <= 10){
    //prompt the user to enter the next grade
    cout << "Enter grade: ";
    int grade;
    cin >> grade;
    //Add the grade into the total
    total += grade;
    //Add one to the grade counter
    gradeCounter += 1;
}
//set the class average to the total divided by ten
int average = total / 10;
//print the class average
cout << "\nTotal of all 10 grades is " << total;
cout << "\nClass average is "<< average <<endl;
