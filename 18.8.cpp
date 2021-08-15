/* This program performs linear and binary search in an array */
#include<iostream>
using namespace std;

//prototypes
int linearSearch(const int [], int, int);
int binarySearch(const int [], int, int);
void sort(int[], int);

int main()
{
    //Declare and init the array
    int numbers[20] = {16, 10, 81, 35, 277,
                        5131, 1234, 4543, 452, 514,
                        9835, 621, 75, 770, 7614,
                        931, 5765, 19654, 665, 33441};
    //Declare variable for user input
    int n;

    cout<<"Enter your number to search:\n";
    cin>>n;

    //call sort arr
    sort(numbers, 20);

    //Display the elements
    cout<<"SORTED VALUES\n";
    for(int i=0; i<20; i++)
    {
        cout<<numbers[i]<<endl;
    }
    //call function linear search
    cout<<" Linear search needed "<<linearSearch(numbers, n, 20)<<endl;

    //call function binary search
    cout<<" Binary search needed "<<binarySearch(numbers, n, 20)<<endl;

    return 0;
}
int linearSearch(const int a[], int n, int s)
{
    //Loop through all elements in the array
    for(int b=0; b<s; b++)
    {
        //Check if number is valid
        if(a[b] == n)

        //return number of searches
        return b+1;
    }
    //Display message
    cout<<"ELEMENT NOT FOUND ";
}
int binarySearch(const int a[], int n, int s)
{
    //Declare variables to be used
    int f=0, l= s-1, m, count = 1;
    //Continue loop until first and last indexes have not overlapped
    while(f <= l)
        //Get middle element
        m = (f + l) / 2;
        //Check if middle element is equal to value
        if(a[m] == n)
        {
            return count;
        }
        //If middle element exceeds to value
        else if(a[m] > n){
            l = m - 1;
        }
        //If middle element less to value
        else if(a[m] < n){
            f = m + 1;
        }
        count++;

        //If element is not found
        cout<<"ELEMENT NOT FOUND ";
}
void sort(int a[], int n)
{
     //Declare variables
     int i, min, minIndex;

     for(i = 0; i < n-1; i++)
     {
         //Initialize min and minIndex to first element
         min = a[i];
         minIndex = i;

         //Loop on all remaining elements of the array
         //j is moving to the next element
         for(int j = i+1; j < n; j++)
         {
             //Check if ongoing element is less than current min
             if(a[j] < min)
             {
                 //update variables
                 if(a[j] < min)
                 {

                     //update variables
                     min = a[j];
                     minIndex = j;
                 }
             }
         }
         //Put ongoing element to final position
         a[minIndex] = a[i];

         //Put lowest value first
         a[i] = min;
     }

}