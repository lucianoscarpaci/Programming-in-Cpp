/* The program checks whether the number of pennies, nickels, and dimes
are equal to one dollar */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    int pen, nic, dim, quart, total;

    //Display message to the user
    cout << "Number of each coins required to make exactly $1?\n";
    cout << "Pennies:\n";
    cin >> pen;
    cout << "Nickels:\n";
    cin >> nic;
    cout << "Dimes:\n";
    cin >> dim;
    cout << "Quarters:\n";
    cin >> quart;

    //Calc the total in cents
    total = pen + (nic * 5) + (dim * 10) + (quart * 25);

    //If statement to check whether total equals 100 cents (one dollar)
    if(total == 100)
    {
        cout << "Congratulations! Victory.\n";
    }
    //In case amount is less than a dollar
    else if(total < 100)
    {
        cout << "The amount entered is less than $1.\n";
    }
    else
    {
        cout << "The amount entered is more than $1.\n";
    }

    return 0;
}