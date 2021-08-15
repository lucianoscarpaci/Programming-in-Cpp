//C++ program that play 'guess the number' game with the user
//header
#include<iostream>
//to generate random numbers
#include<cstdlib>
//set the time
#include<ctime>
using namespace std;

int main()
{
    //set the seed as zero to generate random numbers
    srand(time(0));
    //declare guess and number
    int guess;
    int number;
    char selection = 'y';
    //if user wants to continue
    while(selection == 'y')
    {
        //generate random number between 0 to 1000
        number = rand() % 1000 + 1;
        cout<<"I have a number between 1 and 1000."<<endl;
        cout<<"Can you guess my number?"<<endl;
        cout<<"Please type your first guess";
        cin>>guess;
        //if guess is incorrect
        while(number != guess)
        {
            //test conditions
            if(number > guess)
            {
                cout<<"Too low. Try again."<<endl;
            }
            if(number < guess)
            {
                cout<<"too high. Try again."<<endl;
            }
        }
        //get selection from the user
        cout << "Excellent! You guessed the number!"<<endl;
        cout<<"Would you like to play again (y or n)?";
        cin>>selection;


    }
    return 0;
}