//Program to do some matrix calculations
#include<iostream>
using namespace std;

//function prototype
bool cs(const int s[][3], const int r);

int main()
{
    //Array size(3X3 matrix)
    const int n = 3;
    int arr[n][n];

    //Accept input for the matrix
    for(int m=0; m < n; m++)
    {
        for(int z=0; z<n; z++)
        {
            cout<<"("<<m+1<<","<<z+1<<"): ";
            cin>>arr[m][z];
        }
    }

    //Display the matrix
    for(int m=0; m<n; m++)
    {
        for(int z=0; z<n; z++)
        {
            cout<<arr[m][z]<<"";
        }

        cout<<endl;
    }
    //Check whether the matrix is a Lo Shu Magic Square
    if (cs(arr,n))
    {
        cout<<"This square represents a Lo Shu Magic Square.\n";
    }
    else
    {
        cout<<"This square does not represent a Lo Shu Magic Square.\n";
    }

    return 0;
}
//function definition
bool cs(const int arr[][3], const int r)
{
    //Declare variable that will store sum of the row as a reference
    long a = 0;
    //Store the sum for the first column
    for(int h=0; h < r; h++)
    {
        a += arr[h][0];
    }
    //Declare a variable to match the sum of the other rows
    long sum = 0;
    //Check sum of the rows
    for(int h=0; h < r; h++)
    {
        sum = 0;

        //add values within the row
        for(int b=0; b<3; b++)
        {
            sum += arr[h][b];
        }
        //if it is different, return false
        if(sum !=a)
        {
            return false;
        }
    }

    //Check the sum of columns
    for(int b=0; b<3; b++)
    {
        //init the sum to zero before each iteration
        sum = 0;
        //Add the values within the column
        for(int h=0; h < r; h++)
        {
            sum +=arr[h][b];
        }

        //If it is different, return false
        if(sum !=a)
        {
            return false;
        }
    }
    //Check the sum of the first diagonal, row = col.
    sum = 0;

    for(int i=0; i<r; i++)
    {
        sum += arr[i][i];
    }

    //If it is different, return false
    if(sum !=a)
    {
        return false;
    }

    //Check the sum of the other diagonal
    sum = 0;

    for(int b=0; b<3; b++)
    {
        sum += arr[2-b][b];
    }

    //If it is different, return false
    if(sum !=a)
    {
        return false;
    }
    //If sum of all rows,columns,diagonals are same of first column, return true
    if(true)
    {
        cout<<"Sum of all rows, columns, and diagonals is "<<a<<endl;
            return true;
    }
}