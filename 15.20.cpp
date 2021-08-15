/* This program generates a random number and the user
guesses the number that has been generated */
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    //Declare variable to store random number
    int n=rand()%100+1;

    //Declare the variable to store the guessed number
    int n1;
    //Iterate until the guessed number matches generated random num
    do
    {
        //Enter the guess
        cout<<"Enter the number: ";
        cin>>n1;

        /* Check whether the guess is greater than generated random number */
        if(n1>n)
        {
            cout<<"Too high, try again.\n";
        }
        else if(n1<n)
        {
            cout<<"Too low, try again.\n";
        }
        else
        {
            cout<<"You got it.\n";
        } 
    }
while(n1!=n);

return 0;
}

