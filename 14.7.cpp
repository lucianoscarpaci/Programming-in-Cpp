/* This program displays the time as the number of minutes, hours, or days */

#include<iostream>
using namespace std;

int main()
{
    int scnds;

    //Display message to take user input
    cout<<" Enter number of seconds:\n";
    cin>> scnds;

    //If statement in case input is more than 60, but less than 3600
    if(scnds >= 60 && scnds < 3600)
    {
        cout<<scnds<<" seconds equals "<<scnds/60<<" minutes.\n";
    }
    //Else if statement if the input is more than 3600, but less than 86400
    else if(scnds >= 3600 && scnds < 86400)
    {
        cout<<scnds<<" seconds equals "<<scnds/86400<<" hours.\n";
    }
    //Else if statement in case input is higher than 86400
    else if(scnds >= 86400)
    {
        cout<<scnds<<" seconds equals "<<scnds/86400<<" days.\n";
    }

    return 0;

}