//This program displays a square pattern using the character X
#include<iostream>
using namespace std;

int main()
{
    //Declaration of variable
    int u1;

    //Ask the user to enter a positive integer greater than 15.
    cout<<"Enter a positive integer number greater than 15: ";
    cout<<endl;

    //While loop to validate the input
    while(!(cin>>u1) || u1 > 15 || u1 < 0)
    {
        cout<<"Error. Enter a positive integer number less than or equal to 15: ";

        //Clear the error data.
        cin.clear();
        cin.ignore(1200, '\n');
    }

    //The for loop to display pattern.
    for (int i=0; i<u1; i++)
    {
        for (int j=0; j<u1; j++)
        {
            //Display square using 'X'.
            cout<<"X";
        }

        cout<<endl;
    }
    return 0;
}