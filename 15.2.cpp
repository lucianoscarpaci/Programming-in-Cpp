/* The program to display 16 characters in each line on the console
*/
#include<iostream>
using namespace std;

//The main
int main()
{
    //For loop to go from 0 until 127
    for(char i=0; i < 127; i++)
    {
        //Display the char
        cout<<i<<" ";

        //If statement to start the character from new line
        if(i % 16 == 15)
            cout<<endl;
    }
    return 0;
}