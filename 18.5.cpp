/* This program performs dual sorting in descending order
for average rainfall per month. */
#include<iostream>
using namespace std;

//Function prototype
void dualSort(double[], string[], int);

//the main
int main()
{
    //Declaring an array of month names.
    string months[12] = {"January", "February", "March", 
    "April", "May", "June", "July", "August", "September",
    "October", "November", "December"};
    //Declare an array of 12 elements
    double a[12];
    //Take input for the twelve elements.
    cout<< "Enter rainfall data for 12 months:\n";

    for(int x=0; x<12; x++)
    {
        cout<<"Month "<<x+1<<": ";
        cin>>a[x];

        //Validate input using while loop
        while(a[x]<0)
        {
            cout<<"Error. Try again.";
            cin>>a[x];
        }
    }
    //Declare variables to store values of total and average
    double total = 0.0, average;
    //Declare variables to store most and least amount of rainfall
    int lowest = 0, highest = 0;
    //For loop to get required data
    for(int x=0; x<12; x++)
    {
        //Get the lowest element
        if(a[x] < a[lowest])
            lowest = x;
        //Get the highest element
        if(a[x] > a[highest])
            highest = x;
        //Add the elements for total rainfall
        total += a[x];
    }
    //Find the average
    average = (double)total/12;

    //Display the results
    cout<< "\nThe total yearly rainfall: "<<total<<endl;
    cout<< "The average monthly rainfall: "<<average<<endl;
    cout<<"The lowest rainfall was in month "<<lowest + 1<<" with "<<a[lowest]<<"inches of rainfall."<<endl;
    cout<<"The highest rainfall was in month "<<highest + 1<<" with "<<a[highest]<<"inches of rainfall."<<endl;

    dualSort(a, months, 12);

    return 0;
}
void dualSort(double a[], string m[], int n)
{
    //declare variables
    int i, maxIndex;
    double max;
    string temp;

    //begin looping all the elements
    for(i=0; i<n-1;i++)
    {
        //Initialize the max and maxIndex
        max = a[i];
        maxIndex = i;
        temp = m[i];

        //check all the remaining elements of the array
        for(int j = i+1; j<n; j++)
        {
            //Check whether current element is greater than minValue
            if(a[j] > max)
            {
                //Update the values
                max = a[j];
                maxIndex = j;

                //Update other array
                temp = m[j];
            }
        }
    }
    //put current element in its final position
    a[maxIndex] = a[i];

    //Put greatest value first
    a[i] = max;

    //Put the current month in its final position
    m[maxIndex] = m[i];

    //Update the current month's name  to one with greatest rainfall
    m[i] = temp;
}
cout<<"Order of months from highest to lowest average rainfall\n";

//Display the months and average rainfall
for(int k=0; k<n; k++)
{
    cout<<m[k]<<" "<<a[k]<<endl;
}