/* This program makes a matching game */
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    //declare two arrays for storing random sequence
    int l[5];
    int u[5];

    //Declare variable to keep count of digits
    int count=0;
    //srand()
    srand(time(0));
    //Populate lottery array with random values
    for(int counter=0; counter<5; counter++)
    {
        //rand() % 10 will generate random num from 0 to 9
        l[counter] = rand() % 10;
    }
    //Get input from the user
    cout<<"Enter the number[0-9]: ";

    for(int w=0; w<5; w++)
    {
        cin >> u[w];

        //If any digit from two arrays match increment
        if(u[w] == l[w])
            count++;
    }
    //Display the lottery ticket
    cout << "\nSequence generated: ";

    for(int w=0; w<5; w++)
    {
        cout<<l[w]<< " ";
    }
    //Display user input
    cout << "\nUser input: ";

    for(int w=0; w<5; w++)
    {
        cout << u[w] << " ";
    }
    //If all five digits match, display the message
    if(count == 5)
    {
        cout<<"\nSequence matched with input!\n";
    }
    else
    {
        cout <<"\n Sorry, "<<count<<" numbers matched";
    }
    return 0;
}