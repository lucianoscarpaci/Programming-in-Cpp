/* this program performs selection sort and bubble in an array */
#include<iostream>
using namespace std;

int selectionSort(int[], int);
int bubbleSort(int[], int);

int main()
{
    //Declare the array numbers with 20 elements
    int numbers1[20] = {25, 70, 21, 95, 2177, 1234
                        2345, 1041, 3452, 90, 12345, 
                        421, 5, 0, 14, 951, 1022, 20000
                        125, 41};
    //Declare the array numbers 2
    int numbers2[20] = {35, 40, 61, 9, 277, 5431, 1234
                        123, 452, 2351, 9852, 2421, 215, 0, 14,
                        9512, 67625, 19254, 5, 41232};
    //Display data
    cout << "After bubble sort...\n";

    cout<< "\nBubble sort took "<<bubbleSort(numbers1, 20)<<"exchanges\n";

    //Display the data
    cout << "After Selection sort...\n";

    cout << "\nSelection sort took "<<selectionSort(numbers2, 20)<<"exchanges\n";
    return 0;
}
int selectionSort(int a[], int n)
{
    //Declare counter variable
    int c = 1;

    //Declare variables 
    int i, min, minIndex;

    //Loop all elements
    for(i = 0; i < n-1; i++)
    {
        //Init minValue and minIndex to first element
        min = a[i];
        minIndex = i;

        //Loop all remaining elements of the array
        for(int j = i+1; j < n; j++)
        {
            //Check whether ongoing elements is less than min
            if(a[j] < min)
            {
                //update values
                min= a[j];
                minIndex = j;
            }
        }
        //Place lowest element at its final position
        a[minIndex] = a[i];
        a[i] = min;
        //Increment counter only if exchange takes place
        c++;

    }
    for( int i=0; i<n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return c;
}
//Function definition
int bubbleSort(int a[], int n)
{
   //Declare variable to store swap for increment value
   int c = 1;
   //Declare variable for swap
   int temp;

   //Iterate till second to last element
   for(int i=0; i < n; ++i)
   {
       //If it is higher than previous value
       for(int j=0; j<n-i-1; ++j)
       {
           if(a[j] > a[j+1])
           {
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
               c++;
           }
       }
   } 
   for(int i=0; i<n; i++)
   {
       cout<<a[i]<<"  ";
   }

   return c;
}