/* The program displays who comes first, second, and third in a race
between three runners, according to the time they take to finish
the race and time inputs must be positive */
#include<iostream>
#include<string>
using namespace std;

int main()
{
    //Declare variables
    string r1, r2, r3;
    double t1, t2, t3;

    //Display message to enter details for first runner
    cout << "Enter the name of the first runner: \n";
    cin >> r1;
    cout << "Enter the time of the first runner(in seconds) to finish the race: \n";
    cin >> t1;

    cout << "Enter the name of the second runner: \n";
    cin >> r2;
    cout << "Enter the time of the second runner(in seconds) to finish the race: \n";
    cin >> t2;

    cout << "Enter the name of the third runner: \n";
    cin >> r3;
    cout << "Enter the time of the third runner: \n";
    cin >> t3;

    //Validate the input for t1, t2, and t3
    if(t1 > 0 && t2 > 0 && t3 > 0){
        if(t1 < t2 && t2 < t3)
            cout << "1. " << r1 << "\n2. "<< r2 << "\n3. " <<r3;
        if(t1 < t3 && t3 < t2)
            cout << "1. " << r1 << "\n2. "<< r3 << "\n3. " <<r2;
        if(t2 < t1 && t1 < t3)
            cout << "1. " << r2 << "\n2. "<< r1 << "\n3. " <<r3;
        if(t2 < t3 && t3 < t1)
            cout << "1. " << r2 << "\n2. "<< r3 << "\n3. " <<r1;
        if(t3 < t1 && t1 < t2)
            cout << "1. " << r1 << "\n2. "<< r1 << "\n3. "<<r2;
        if(t3 < t2 && t2 < t1)
            cout << "1. " << r3 << "\n2. "<< r2 << "\n3. "<<r1;
    }
    else{
        cout << "Invalid input! Enter a positive number for the time! Try again.";
    }
    return 0;
}