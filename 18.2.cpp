/* Program checks whether lottery numbers entered
by user is in the winning list */
#include<iostream>
using namespace std;

bool isFound(const int[], int, int);

int main()
{
    int playedNumbers[10] = {13579, 26000, 26700, 30045, 50505,
    62000, 70007, 80422, 85600, 93001};
    //input
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    //print message
    if(isFound(playedNumbers, 10, n))
    {
        cout<<"You have won!\n";
    }
    else
    {
        cout<<"You didn't win this week!\n";
    }
    return 0;
}
bool isFound(const int numbers[], int size, int n)
{
    //Loop through the array
    for(int x=0; x<size; x++)
    {
        if(numbers[x] == n)
        {
            return true;
        }
    }
    return false;
}