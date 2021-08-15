//Program displays all the elements of the array that are bigger 
//than the number entered
#include<iostream>
using namespace std;

//function prototype
void large(int[], int, int);

int main()
{
    //Declare variables to store the array size and array
    int a;
    int n[10];

    //accept input 
    cout<<"Enter the size of array: ";
    cin>>a;
    
    //take input from user
    cout<<"Enter the array: ";

    for(int i=0; i < a; i++)
    {
        cin>>n[i];
    }

    //Display the array
    cout<<"Contents of array:\n";

    //For loop to display the element
    for(int j=0; j<a; j++)
    {
        cout << n[j] << " ";
    }

    //Declare variable
    int b;

    //take input
    cout<<"\nEnter the number to be used: ";
    cin>>b;
    //Call the function to display elements greater than number enterd
    cout << "\nElements greater than "<<b<<" are: ";
    large(n, a, b);

    return 0;
}
//function definition
void large(int nums[], int size, int num)
{
    int j=0;
    //Iterate through the elements using for-loop
    if(nums[j] > num)
    {
        for(j = 0; j < size; j++)
        {
            cout << nums[j] << " ";
        }
    }
    else
        cout<<"No greater number found"<<endl;
}
