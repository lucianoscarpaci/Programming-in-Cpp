/* This program converts user input into Roman numerals 
within one to ten */
#include<iostream>
using namespace std;

int main()
{
    //Declare variable
    int number;
    //Display message to enter a number
    cout<<"Enter a number(within 1 to 10): "<<endl;
    cin>>number;

    //Input validation within 1 to 10
    if(number>0 && number<=10){
        //switch case statement
        switch(number){
            case 1:
                //Display numeral for number 1
                cout<<"The Roman numeral is I.\n";
                break;
            case 2:
                cout<<"The Roman numeral is II.\n";
                break;
            case 3:
                cout<<"The Roman numeral is III.\n";
                break;
            case 4:
                cout<<"The Roman numeral is IV.\n";
                break;
            case 5:
                cout<<"The Roman numeral is V.\n";
                break;
            case 6:
                cout<<"The Roman numeral is VI.\n";
                break;
            case 7:
                cout<<"The Roman numeral is VII.\n";
                break;
            case 8:
                cout<<"The Roman numeral is VIII.\n";
                break;
            case 9:
                cout<<"The Roman numeral is IX.\n";
                break;
            case 10:
                cout<<"The Roman numeral is X.\n";
                break;
            

        }
    }
    else{
        cout<<"Invalid statement, Try again."<<endl;
    }
    return 0;
}