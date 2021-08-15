/* This program uses binary search and sort to a set of account numbers
*/
#include<iostream>
using namespace std;

bool isFound(const int[], int, int);
void selectionSort(int[], int);

int main()
{
    int accounts[18] = {5658845, 4520100, 7800122, 8450008,
    1000850, 8080602, 457694, 859053, 850354, 89543, 43894, 
    585334, 554804, 87594, 895455, 294394, 85405, 23234};
    int n;
    //store input
    cout<<"Account Number: ";
    cin>>n;

    //Sort the array by calling selectionSort()
    selectionSort(accounts, 18);
    //Print if found using if-else block
    if(isFound(accounts, 18, n))
        cout<<"This is a valid number!\n";
    else
        cout<<"This is not a valid number!\n";
    return 0;
}
void selectionSort(int numbers[], int n)
{
    int small, smallIndex;

    //Start loop by excluding last element
    for(int i=0; i < n-1; i++)
    {
        //Init the variable with first element of array
        small = numbers[i];
        smallIndex = i;

        //Iterate for all elements in the array, including last term
        for(int k = i+1; k < n; k++)
        {
            //Check whether next element is lower than previous
            if(numbers[k] < small)
            {
                //Update values of variables
                small = numbers[k];
                smallIndex = k;
            }
        }
        //Swap positions of small and big elements.
        numbers[smallIndex] = numbers[i];

        //Put lowest value first
        numbers[i] = small;
    }
}
// Function definition for binary search
bool isFound(const int numbers[], int n, int a)
{
    //Declare the first and last variables to perform search.
    int first=0, last=n-1, middle;

    /* Continue the loop until the first index is same or higher
    than the last index value */
    while(first <= last)
    {
        //Get middle element
        middle = (first + last) / 2;

        //Checks whether middle element is equal to the value entered
        if(numbers[middle] == a)
        {
            return true;
        }
        //If middle element is higher than value entered by user

        //Update search space to first half of array
        else if(numbers[middle] > a)
        {
            last = middle - 1;
        }
        //If middle element is lower than value enterd by user

        //Update search space to second half of array
        else if(numbers[middle] < a)
        {
            first = middle + 1;
        }
    }
    //if number is not found during traversal, return false
    return false;
}