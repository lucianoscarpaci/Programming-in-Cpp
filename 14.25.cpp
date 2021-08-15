/* The program calculates customer's bill based on the package (A, B, or C) */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    char pkg;
    double gb, amount;

    //Display the message and enter the input
    cout << "Enter the package: " << endl;
    cin >> pkg;

    cout << "Gigabytes used: " << endl;
    cin>>gb;

    //If customer purchases Package A
    if(pkg == 'a' || pkg == 'A')
    {
        amount = 39.99;
        if(gb > 4)
        {
            amount = amount + (gb - 4) * 10;
        }
        cout << "The total amount due is: $" << amount << endl;
    }

    //If customer purchases Package B
    else if(pkg == 'b' || pkg == 'B')
    {
        amount = 59.99;
        if(gb > 8)
        {
            amount = amount + (gb - 8) * 5;
        }
        cout << "The total amount due is: $" << amount << endl;
    }
    //If customer purchases Package C
    else if(pkg == 'c' || pkg == 'B')
    {
        amount = 69.99;
        cout << "The total amount due is: $" << amount << endl;
    }
    else
    {
        cout << "Invalid input for package. Try Again";
    }

    return 0;
}