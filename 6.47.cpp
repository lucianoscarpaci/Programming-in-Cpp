//C++ program to play the craps game with a player
#include<iostream>
#include<iomanip>
//srand() and rand()
#include <cstdlib>
//time functions and set time
#include <ctime>
using namespace std;
//function declarations
int rollDice(int diceVals[], int numberToRoll =2);
void gameCraps(int sum, int bankBalance, int wager);
enum Status {CONTINUE, WON, LOST};
//main begins
int main()
{
    //declare variables
    int sum;
    int diceVals[2];
    int bankBalance = 1000;
    int wager;
    //random function
    srand(time(0));
    //call the roll dice function
    sum = rollDice(diceVals);
    //init the bank balance
    cout << "Your bank balance is: "<<bankBalance <<"$"<<endl;
    cout << "Please enter a wager: "; cin>>wager;
    //test conditions
    if(wager > 1000)
    {
        //prompt 
        cout <<"Not valid"<<endl;
        cout <<"Please enter a wager: ";cin>>wager;
    }
    //print the value of the wager
    cout<<endl<<"Your wager: "<<wager<<"$"<<"\n\n";
    //rolled the dice
    cout<<"Player rolled: "<<diceVals[0]<<" + "<<diceVals[1]<<endl;
    //return the function
    return 0;
}
//function definition
int rollDice(int diceVals[], int numberToRoll)
{
    //declaration
    int dicevalues=0;
    //iterate up to number of dicerolls
    for(int i=0; i<numberToRoll; i++)
    {
        //declaration of array
        diceVals[i] = 1 + rand()%6;
    }
    for(int i=0; i<numberToRoll; i++)
    {
        dicevalues = dicevalues + diceVals[i];
    }
    return dicevalues;
}
//function definition of game craps
{
    //declare variables
    int myPoint;
    int diceVals[2];
    char userchoice;
    Status gameStatus;
    //define the switch case
    switch(sum)
    {
        case 7:
            gameStatus = WON;
        case 11:
            gameStatus = WON;
        case 2:
            gameStatus = LOST;
        case 3:
            gameStatus = LOST;
        case 12:
            gameStatus = LOST;
        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            cout << "Point is: "<<myPoint<<endl;
            break;
    }
    //iterate loop until the continue
    while (gameStatus == CONTINUE)
    {
        //call rollDice function
        sum = rollDice(diceVals);
        cout <<"Player rolled: "<<diceVals[0]<<" + "<<diceVals[1]<<endl;
        //tests the conditions
        if (sum == myPoint)
        {
            gameStatus = WON;
        }
        else if (sum == 7)
        {
            gameStatus = LOST;
        }
        //Tests condtions for winning status
        if (gameStatus == WON)
        {
            //prompt WIN
            cout<<"\n\t***Plauer Wins***\n"<<endl;
            //account balance
            bankBalance += wager;
            //prompt the balance
            cout << "Your bank balance is now: "<<bankBalance<<"$"<<endl;
            //accept the choice from the user
            cout<<"Would u continue? Y or N";
            cin>>userchoice;
            //tests conditions for choices
            if(userchoice == 'y')
            {
                //prompt the user
                cout<<"Your ***WINNING";
                gameStatus = CONTINUE;
            }
            //iterate loop until user wants to play
            while (gameStatus == CONTINUE)
            {
                sum = rollDice(diceVals);
                //prompt balance
                cout<<"Your bank balance is: "<<"$"<<bankBalance<<"\n";
                //accept wager from user
                cout<<"Please enter a wager: "; cin>>wager;
                //prompt the wager value
                cout<<"\n"<<"Your wager: "<<wager<<"$"<<"\n\n";
                //roll the dice
                cout << "Player rolled: "<<diceVals[0]<<" + "<<diceVals[1]<<endl;
                //call gamecraps
                gameCraps(sum, bankBalance, wager);
            }
            //tests conditions when user wants to play
            if (userchoice == 'n')
            {
                //prompt the user
                cout<<"Ah c'mon, take a chance! You go away with bank balance of"<<bankBalance<<"$"<<"\n";
                exit(0);
            }
            //again tests the users choice
            if (userchoice !='n' || userchoice !='y')
            {
                //accept proper choice from user
                cout<<"Please enter a valid choice ('Y' or 'N')\n";
                exit(-1);
            }

        }
    }
    //condition for when player lost
    else
    {
        //prompt the loss
        cout<<"\n\t***Player loses***\n"<<endl;
        //decrease wager balance from account balance
        bankBalance = bankBalance - wager;
        //tests condition, when user out of chips
        if (bankBalance <= 0)
        {
            cout << "Sorry, you dont have enough cash to continue";
            cout << "Your bank balance is now "<<bankBalance<<"$"<<"\n";
            exit(-1);
        }
        //tests the conditions
        if(bankBalance > 0)
        {
            cout << "Would you like to cash in Y or N?";
            //if user wants to play
            if(userchoice == 'y')
            {
                //prompt the message
                cout << "Oh, you're going for broke now?";
                gameStatus = CONTINUE;
            }
            //iterate until user wants to play
            while (gameStatus == CONTINUE)
            {
                //assign variable dice value
                sum = rollDice(diceVals);
            
                //prompt the bank balance
                cout << "Your bank balance is: "<<bankBalance<<"$"<<"\n";
                //accept the wager from the player
                cout << "Please enter a wager: "; cin>> wager;
                //prompt the wager balance
                cout<<endl<<"Your wager: "<<wager<<"$"<<"\n\n";
                cout<<"Player rolled: "<<diceVals[0]<<" + "<<diceVals[1]<<endl;
                //call the gameCraps function
                gameCraps(sum, bankBalance, wager);
            }
            //tests the choice if user is in negative
            if (userchoice == 'n')
            {
                //prompt the final message
                cout << "Thanks for playing! You go away with a bank balance of"<<"$"<<bankBalance;
                exit(0);
            }
            //tests if the choice is not defined
            if (userchoice !='y'||userchoice !='n')
            {
                //prompt
                cout<<"Please enter a valid choice to continue\n";
                exit(-1);
            }

        }
    }
}