/* The program displays secondary colors based on the input 
of two distinct primary colors */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    string color1, color2;

    //Display the messages to choose and enter the colors
    cout << "Choose two distinct colors among \"red\" \"blue\" or \"yellow\".\n";
    cout << "Enter first color name: ";
    cin>>color1;
    cout << "Enter second color name: ";
    cin>>color2;

    //If the input colors are blue and red
    if((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red"))
    {
        cout << "The secondary color is purple.\n";
    }
    //Else, if the input colors are yellow and red
    else if((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red"))
    {
        cout << "The secondary color is orange.\n";
    }
    //Else, if the input colors are yellow and blue
    else if((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue"))
    {
        cout << "The secondary color is green.\n";
    }
    else
    {
        cout << "Invalid Input! Choose among \"red\"blue\" or \"yellow\"!\n";
    }

    return 0;
}