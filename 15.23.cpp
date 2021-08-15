//This program displays patterns
#include<iostream>
using namespace std;

int main()
{
    //Declaration of variables
    int col=10;
    int row=10;

    //Display pattern A
    cout<<endl<<"Pattern A:"<<endl;

    //For-loop for num of rows
    for(int row=0; row<10; row++)
    {
        //For-loop for num of col
        for(int col=0; col<row; col++){
            //Displays pattern with '+'
            cout<<"+";
        }
        cout<<endl;
    } 
    //Display pattern B
    cout<<endl<<"Pattern B:"<<endl;
    cout<<"\n";

    //For-loop for num of rows
    for(int row=10; row >= 1; row--)
    {
        //For-loop for num of col
        for(int col=1; col<row; col++){
            cout<<"+";
        }
        cout<<endl;
    }

    return 0;
}