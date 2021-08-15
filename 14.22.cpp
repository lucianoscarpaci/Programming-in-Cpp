/* Program to display the boiling and freezing substance at given
temperature entered by the user. */
#include<iostream>
using namespace std;

int main()
{
    int temp;
    //Display message to enter temperature
    cout << "Please enter temperature(in F):\n";
    cin >> temp;

    //if-else statement to determine freezing point of substances
    if(temp <= -362)
        cout << "Ethyl Alcohol, Mercury, Oxygen and Water will freeze.\n";
    else if(temp <= -173)
        cout << "Ethyl Alcohol, Mercury, and Water will freeze.\n";
    else if(temp <= -38)
        cout << "Mercury and Water will freeze.\n";
    else if(temp <= 32)
        cout << "Water will freeze.\n";
    
    //if-else statement to determine boiling points of substances
    if(temp >= 676)
        cout << "Mercury, Water, Ethyl Alcohol and Oxygen will boil.\n";
    else if(temp >= 212)
        cout << "Water, Ethyl Alcohol and Oxygen will boil.\n";
    else if(temp >= 172)
        cout << "Ethyl Alcohol and Oxygen will boil.\n";
    else if(temp >= -306)
        cout << "Oxygen will boil.\n";

    //return
    return 0;
}