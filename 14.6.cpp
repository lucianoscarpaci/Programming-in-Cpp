/* The program displays object's weight based on user input for mass, and
displays whether it is light or heavy */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    double mass, wght;

    //Display message to enter object mass
    cout<<"Enter the objects mass: \n";
    cin>>mass;

    wght = mass * 9.8;
    cout<<"This objects weight is "<<wght<<" Newtons.\n";

    //If statement to check whether the object is heavy
    if (wght > 1000){
        cout << "Object is too heavy.\n";
    }
    else if (wght < 10){
        cout << "Object is too light.\n";
    }

    return 0;
}
