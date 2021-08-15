/* This program replicates a matching game scenario. */

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    //Declare two arrays for storing random sequence
    int l[5];
    int u[5];
    //Declare variable to keep count of matching digits
    int count=0;
    //srand creates random numbers on each iteration
    srand(time(0));
    //Populate the lottery array with random values
    for(int counter=0; counter<5; counter++)
    {
        //rand() % 10 will generate random num from 0 to 9
        l[counter] = rand() % 10;
    }
    //Get input from the user
    cout << "Enter the number[0-9]: ";

    for(int w=0; w<5; w++)
    {
        cin >> u[w];

        //if any digit from two arrays match, increase 
        //the value of count
        if(u[w] == l[w])
            count++;
    }
    //Display the lottery ticket
    cout << "\nSequence generated: ";

    for(int w=0; w<5; w++)
    {
        cout << l[w] << " ";
    }

    //Display the user input
    cout << "\nUser input: ";

    for(int w=0; w<5; w++)
    {
        cout<<u[w]<<" ";
    }
    //if all five digits match, display the message
    if(count == 5)
    {
        cout<<"\n Sequence matched with input!\n";
    }
    else
    {
        cout<<"\n Sorry, "<<count<<" numbers matched";
    }
    return 0;

    
}