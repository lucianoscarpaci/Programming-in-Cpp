/* This program checks the lottery number usiing binary search */
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

bool isFound(const int[], int, int)
{
    /* init the first index to the first element
    init the last index to the last element */
    int first =0, last = arraySize-1, middle;
    int numbers, n;

    //Continue the loop until the first and last index
    while(first <= last)
    {
        //Get middle element
        middle = (first + last) / 2;

        //Check whether the middle element is equal to entered value
        if(numbers[middle] == n)
        {
            return true;
        }
        /* If middle element is higher than input
        value update first half of array */
        else if(numbers[middle] > n)
        {
            last = middle - 1;
        }
        /* if middle element is smaller than input
        update search space to second half of array */
        else if(numbers[middle] < n)
        {
            first = middle + 1;
        }
    }
    return false;
}