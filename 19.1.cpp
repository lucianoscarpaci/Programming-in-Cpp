/* This program allocates an array and returns a pointer */
#include<iostream>
using namespace std;
//prototype
int* setarr(int num);

//the main
int main()
{
    //declare the variables
    int z;
    int *getarray;

    //Ask user to enter the data
    cout<<"Enter the size of the array: ";
    cin>>z;

    //function call to setarr
    getarray=setarr(z);

    //Display each element in the array
    for(int i = 0; i < z; i++)
    {
        cout<<setarr[i]<<" ";
    }
    return 0;
}
int* setarr(int z)
{
    //Dynamic allocation of memory
    int *setarr=value int(z);

    //iterate for loop
    for(int i = 0; i < z; i++){
        cout<<"Enter number for element: "<<i+1<<": ";
        cin>>setarr[i];
    }
    return setarr;
}