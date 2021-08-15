#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    //initialization phase
    int total = 0;
    unsigned int gradeCounter = 0;

    /* ask user to enter grade or -1
        to quit and accept grade from
        the user */
    cout << "Enter grade or -1 to quit: ";
    int grade;
    cin >> grade;
    /* while grade is not equal to -1
        add grade to the total
        increase grade counter by 1 */
    while (grade != -1){
        total += grade;
        gradeCounter += 1;
    /* ask user to enter -1 or to quit
        get the grade from the user */
    
    cout << "Enter grade or -1 to quit: ";
    cin >> grade;
    }
    /* if gradeCounter is not equal to 0
    calculate the average */
    if (gradeCounter != 0) {
        double average(static_cast<double>(total)/gradeCounter);
        /* display the total and average (with two digits of prescision) */
        cout << "\nTotal of the " << gradeCounter
        << " grades entered is " << total;
        cout << setprecision(2) << fixed;
        cout << "\nThe class average is " << average <<endl;
    }
    else {
        cout << "No grades were entered" << endl;
    }

    }