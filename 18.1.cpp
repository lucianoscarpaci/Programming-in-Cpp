/* This program checks whether account number entered is vaild */
#include<iostream>
using namespace std;

//prototype
bool isFound(const int [], int, int);

int main()
{
    //Declare an array and initialize it
    int accounts[18] = {5658845, 452, 789,
                        877, 845, 1302,
                        8080, 4562, 555,
                        5050, 782, 125,
                        100, 654, 3852,
                        7576, 788, 458};
    //Declare variable to enter num
    int userNumber;

    cout << "Enter number: ";
    cin >> userNumber;

    //If data is found, print the appropriate message.
    if(isFound(accounts, 18, userNumber))
    {
        cout << userNumber <<" is a valid number\n";
    }
    else{
        cout << userNumber <<" is not a valid number\n";
    }
    return 0;
}
bool isFound(const int numnbers[], int arraySize, int userNumber)
{
    //Loop through all the numbers int the array
    for(int x=0; x<arraySize; x++)
    {
        //Check the data in the array
        if(numbers[x] == userNumber)
            return true;
    }
    //Return false if the data does not match
    return false;
}