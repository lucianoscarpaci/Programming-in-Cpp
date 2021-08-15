//C++ program enables user to store amount of
//rainfall for 12 months
#include <iostream>

//program uses namespace std
using namespace std;

int main()
{
    //Declare an array of 12 elements
    double a[12];
    //take input for 12 elements
    cout << "Enter rainfall data for 12 Months:";
    
    for(int x = 0; x < 12; x++){
        //counting month all the way
        cout<<"Month "<<x+1 << ": ";
        //Fill the element with a[x]
        cin>>a[x];
        //Validate input using while loop
        while(a[x] < 0)
        {
            cout<<"Error. Negative value for rainfall is not allowed. Try again.";
            cin>>a[x];
        }
    }
    //Declare variables to store the total and average rainfall.
    double total = 0.0, average;
    //Declare variables to store the most and least amount of rainfall.
    int lowest = 0, highest = 0;
    //For loop to fill the array
    for (int x = 0; x < 12; x++)
    {
        //if a[x] < a[lowest]
            //update lowest to x
        if (a[x] < a[lowest])
            lowest = x;
        //if a[x] > a[highest]
            //update highest to x
        if (a[x] > a[highest])
            highest = x;
        //sum up the elements for total rainfall
        total += a[x];
        
    }
    //Find the average
    average = (double)total/12;

    //Display the results
    cout << "\n The total yearly rainfall: "<< total << endl;
    cout << "The average monthly rainfall: "<< average << endl;
    cout << "The lowest rainfall was in month "<< lowest + 1<<" with "<<a[lowest]<<endl;
    cout << "THe highest rainfall was in month "<<highest + 1<<" with "<<a[highest]<<endl;

    return 0;

}