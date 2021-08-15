/* program that lets user enter values in array
largest to smalles values */
#include<iostream>
using namespace std;

int main()
{
    //declare variables
    int a[10];
    int lowest, highest;

    //iterate from i and fill array a[i] 
    for(int i = 0; i < 10; i++)
    {
        cout << "Number" << i + 1 << ": ";
        cin >> a[i];
    }
    
    //init small and high values in first element
    //in the array to zero
    lowest = a[0];
    highest = a[0];
    //iterate the required values in the for-loop
    for(int i = 0; i < 10; i++) {
        //if a[i] is less than lowes
            //update lowest
        if(a[i] < lowest)
            lowest = a[i];
        //if a[i] is greater than highest
            //update highest
        if(a[i] > highest)
            highest = a[i];
    }
    cout << endl;

    //output the lowest number is
    //ouput the highest number is
    cout << "The lowest number is: "<<lowest;
    cout << "\nThe highest number is: "<<highest;

    return 0;
}