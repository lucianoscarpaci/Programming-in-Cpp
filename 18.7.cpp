/* This program performs binary search in an array
*/
#include<iostream>
#include<string>
using namespace std;

void sort(string [], int);
bool binarySearch(const string [], string, int);

int main()
{
    //Declare variable for array size
    const int NUM_N = 20;

    string names[NUM_N] = {"A, B", "S, B", "A, J",
                            "G, J", "S, M", "R, G",
                            "T, T", "J, J", "A, J",
                            "L, J", "W, B", "J, J",
                            "W, J", "P, B", "R, G",
                            "J, R", "H, R", "S,C", 
                            "P, G", "H, B"};

    sort(names, NUM_N);
    //Declare var
    string m;
    //Store user input
    cout<<"\nEnter the name: ";
    getline(cin, m);

    //call binary search
    if(binarySearch(names, m, NUM_N))
        cout<<m<<" has been found in the array. ";
    else
        cout<<m<<" has not been found in the array.";
    return 0;
}
void sort(string names[], int n)
{
    int i, minIndex;
    string min;

    //Begin loop until second to last element in the array
    for(i = 0; i < n-1; i++)
    {
        //Init variables to first element in the array
        min = names[i];
        minIndex = i;

        //Loop all remaining element in the array
        for(int j = i+1; j<n; j++)
        {
            //Check whether string element is less than min
            if(names[j] < min)
            {
                //Update the variables
                min = names[j];
                minIndex = j;
            }
        }

        //Place ongoing element at its final position in the array
        names[minIndex] = names[i];
        //Place lowest value first
        names[i] = min;
    }
    //Display the elements in the array
    for(int k=0; k<n; k++)
        cout<<names[k]<<endl;
}
bool binarySearch(const string a[], string l, int n)
{
    //init vars
    int first=0, last=n-1, middle;

    //While loop to iterate until first element is more than the second
    while(first <= last)
    {
        //Find middle lement
        middle = (first + last)/2;
        //Check middle element has name or not
        if(a[middle] == l)
        {
            return true;
        }
        //If middle element is higher
        //update search for first half of the array
        else if(a[middle] > l)
        {
            //Decrease by 1
            last = middle-1;
        }
        //If middle element is lower than given value
        //update  search space to second half of array
        else if(a[middle] < l)
        {
            //Increase by 1
            first = middle + 1;
        }
    }
    //If the element is not found
    return false;
}