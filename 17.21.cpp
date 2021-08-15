/* This program takes matrix as input and does specified operations
*/
#include<iostream>
using namespace std;

//Function prototypes
long t(const int m[][20]);
double av(const int m[][20]);
long rt(const int m[][20], const int r);
long ct(const int m[][20], const int COL);
int hr(const int m[][20], const int r);
int lr(const int m[][20], const int r);

int a,b;

int main()
{
    //Declare variables
    int c[20][20],e,f;
    //Enter the values
    cout<<"Enter the rows: ";
    cin>>a;

    cout<<"Enter the columns: ";
    cin>>b;

    //Enter the elements
    for(int x=0; x<a; x++)
    {
        for(int y=0; y<b; y++)
        {
            cout<<"Enter the element: ";
            cin>>c[x][y];
        }
    }

    //Display the matrix.
    cout<<"Matrix entered: \n";
    for(int x=0; x<a; x++)
    {
        for(int y=0; y<b; y++)
        {
            cout<<"Enter the element: ";
            cin>>c[x][y];
        }
    }
    //Display the matrix
    cout<<"Matrix entered: \n";

    for(int x=0; x<a; x++)
    {
        for(int y=0; y<b; y++)
        {
            cout<<"Enter the element: ";
            cin>>c[x][y];
        }
    }
    //Display the matrix.
    cout<<"Matrix entered: \n";

    for(int x=0; x<a; x++)
    {
        for(int y=0; y<b; y++)
        {
            cout<<c[x][y]<<" ";
        }

        cout<<endl;
    }

    //Get the input from the user
    cout<<"Enter the row index: ";
    cin>>e;

    cout<<"Enter the column index: ";
    cin>>f;

    //Display the result.
    cout<<"\nTotal of all elements: "<<t(c)<<endl;
    cout<<"\nAverage: "<<av(c)<<endl;
    cout<<"\nTotal of all values in row number "<<e+1<<":"<<rt(c,e)<<endl;
    cout<<"\nTotal of all values in column number "<<f+1<<":"<<ct(c,f)<<endl;
    cout<<"\nHighest element in row number "<<e+1<<":"<<hr(c,e)<<endl;
    cout<<"\nLowest element in row number "<<e+1<<":"<<lr(c,e)<<endl;

    return 0;
}
long t(const int m[][20])
{
    //Declare variable to store num
    long total = 0;

    for(int p=0; p<a; p++)
    {
        for(int q=0 q<b; q++)
        {
            total += m[p][q];
        }
    }
    return total;
}
//Function to calc the average
double av(const int m[][20])
{
    double avg = 1.0 * t(m) / (b*a);

    return avg;
}
long rt(const int m[][20], const int r)
{
    //validate index of row
    if(r >= a || r<0)
    {
        cout<<"Invalid data";
        return 0;
    }
    //Declare a variable to store the sum.
    long total = 0;

    for(int p=0; p<b; p++)
    {
        total += m[r][p];
    }
    return total;
}
long ct(const int m[][20], const int c)
{
    //validate index of column
    if(c >= 20 || c<0)
    {
        cout<<"Invalid data";
        return 0;
    }
    //Declare variable to store the sum
    long total=0;

    for(int i=0; i<a; i++)
    {
        total += m[i][c];
    }
    return total;
}
//Function definition to find highest element in the row
int hr(const int m[][20], const int r)
{
    //validate row index
    if(r >= a || r<0)
    {
        cout<<"Invalid data";
        return 0;
    }
    //Declare variable to store highest element
    int highest = m[r][0];

    for(int j=1; j<b; j++)
    {
        if(highest < m[r][j])
        {
            highest = m[r][j];
        }
    }

    return highest;
}
//Function definition to find lowest in the row
int lr(const int m[][20], const int r)
{
    //validate the row index
    if(r >= a || r<0)
    {
        cout<<"Invalid data";
        return 0;
    }

    //Declare variable to store lowest value
    int lowest = m[r][0];

    for(int j=1; j<b; j++)
    {
        if(lowest > m[r][j])
        {
            lowest = m[r][j];
        }
    }

    return lowest;
}

