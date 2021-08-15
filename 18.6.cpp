/* program performs selection sort in an array that contains strings. */
#include<iostream>
using namespace std;

void sort(string[], int);

int main()
{
    const int NUM_N = 20;
    string names[NUM_N] = {"A, B", "S, B", "A, J",
                            "G, J", "S, M", "R, G",
                            "T, T", "J, J", "A, J",
                            "L, J", "W, B", "J, J",
                            "W, J", "P, B", "R, G",
                            "J, R", "H, R", "S,C", 
                            "P, G", "H, B"};

    sort(names, NUM_N);

    return 0;
}
void sort(string names[], int n)
{
    int i, minIndex;
    string min;

    for(i = 0; i<n-1; i++)
    {
        //Init variables with first element
        min=names[i];
        //store subscript
        minIndex = i;

        //Check all the remaining elements of the array
        for(int j = j+1; j<n; j++)
        {
            //Check whether current string element is lower
            if(names[j] < min)
            {
                //update
                min = names[j];
                minIndex = j;

            }
        }
        //Place current elements at final position
        names[minIndex] = names[i];
    }
    //Display the elements
    for(int k=0; k<n; k++)
        cout<<names[k]<<endl;
}