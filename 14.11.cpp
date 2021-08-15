/* In this program if a user enters correct sum of two numbers,
program congratulates the user. Otherwise, the program displays correct answer.
*/
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main()
{
    //Declare variables
    int n1, n2, sm;

    //Assign random variables
    n1 = rand()%1000 + 5;
    n2 = rand()%100 + 234;

    cout << "Enter the sum of "<<n1 <<" and "<<n2 <<":";
    cin>>sm;

    cout<< endl;
    cout<< " " << setw(4) << n1 << endl;
    cout<< "+" << setw(4) << n2 << endl;
    cout<< "----------\n";
    cout<< " " << setw(4) << sm << endl;
    cout<< "----------\n";

    //If block to check whether a user enters sum
    if(sm == n1 + n2)
    {
        cout << "Congratulations! Correct answer. \n";
    }
    else
    {
        cout << "Incorrect. The correct answer is "<<n1 + n2 <<".\n";
    }

    return 0;
}