/* This program generates a random number
and user guesses the number. program also counts
users number of attempts to guess the number. */
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
    //For generating a random number
    srand(unsigned(time(NULL)));
    //Declaring and initalization of variables
    int num1;
    int answer;
    int tries = 0;

    //Display a message
    cout<<"This is a number guessing game.\n\n";

    //Generate random numbers to be guessed by user.
    num1 = rand() % 100 + 1;

    //Do-while loop
    do
    {
        //Asks user to guess a number
        cout<< "Enter the number:  ";

        //Store the user's response into a variable
        cin>>answer;
        //New line
        cout<<"\n\n";

        //If-else condition
        if (answer > num1)
        {
            //Display a message when the number input by user is high
            cout<< "Too high. Try again!"<<endl;
            tries++;
        }
        else if (answer < num1)
        {
            //Display a message when number input by user is low.
            cout<<"Too low. Try again!" <<endl;
            tries++;
        }
        else
        {
            cout<<"The number has been guessed. The number is "<<num1<<endl;

            //Display a message
            cout<< "It took "<<tries <<" tries to guess number."<<endl;
        }
    
} while (answer != num1);


return 0;

}