//C++ program prompts the square shape
//with star symbol
#include<iostream>
using namespace std;
//function prototype
void square(int);
//global variable side
int side;
//the main
int main()
{
    cout<<"Enter side: ";
    cin>>side;
    square(side);
    return 0;
}
//make a square
void square(int side)
{
    //iterate for the row
    for(int i = 1; i <= side; i++)
    {
        //iterate for the column
        for(int j = 1; j <= side; j++)
        {
            //prompt the asterisk
            cout<< "*";
        }
    }
}