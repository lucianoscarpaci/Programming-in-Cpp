/* program reads data from file and calculates operations */
#include<iostream>
#include<fstream>
using namespace std;
//Prototypes
void low(double[], int);
void high(double[], int);
void avg(double[], int);

int main()
{
    //Declare an array.
    double a[52];
    //Read data from file
    ifstream b("g.txt");
    //If the file is not found
    if(!b)
    {
        cout<<"Error";
        return 0;
    }
    //Read into the array
    for(int i=0; i<52; i++)
    {
        b>>a[i];
    }
    //Close the file
    b.close();
    //Display the results
    cout<<"Lowest average price details: \n";
    low(a,52);

    cout<<"\n\nHighest average price details: \n";
    high(a,52);

    cout<<"\n\nAverage gas price for each month: \n";
    avg(a,52);

    return 0;
}
//Function defintion
void low(double a[], int n)
{
    //Declare variable for storing small value
    double c=a[0];
    //Declare variable to store index
    double j=0;
    //Find the lowest element
    for(int i=0; i<n; i++)
    {
        if(a[i]<c)
        {
            c=a[i];
            j=i;
        }
    }
    //Display the data
    cout<<c;
    cout<<"\nWeek number :"<<j+1;
    cout<<"\nMonth: January";
}
//Function definition
void high(double a[], int n)
{
    //declare variable for storing large value
    double c=a[0];
    //declare variable for index
    double j=0;
    //Find larger element
    for(int i=0; i<n; i++)
    {
        if(a[i]>c)
        {
            c=a[i];
            j=i;
        }
    }
    //Display the data
    cout<<c;
    cout<<"\nWeek number :"<<j+1;
    cout<<"\nMonth: December";
}
void avg(double a[], int n)
{
    //declare variable for average
    double avg=0.0;
    //Declare variable for sum
    double sum=0;
    //For each month, calculate the average
    cout<<"January: ";

    for(int i=0; i<n; i++)
    {
        if(i>=0 && i<=4)
        {
            sum +=a[i];
            avg = sum/5;
        }
    }

    cout<<avg;

    cout<<"\nFebruary: ";
    for(int i=0; i<n; i++)
    {
        if(i>=5 && i<=8)
        {
            double sum;
            sum+=a[i];
            avg=sum/4
        }
    }
    cout<<"\nMarch: ";
    for(int i=0; i<n; i++)
    {
        if(i>=9 && i<=12)
        {
            double sum;
            sum+=a[i];
            avg =sum/4;
        }
    }
    cout<<avg;

    cout<<"\nApril: ";
    for(int i=0; i<n; i++)
    {
        if(i>=13 && i<=16)
        {
            double sum;
            sum+=a[i];
            avg =sum/4;
        }
    }
    cout<<avg;

    cout<<"\nMay: ";
    for(int i=0; i<n; i++)
    {
        if(i>=17 && i<=21)
        {
            double sum;
            sum+=a[i];
            avg =sum/5;
        }
    }
    cout<<avg;

    cout<<"\nJune: ";
    for(int i=0; i<n; i++)
    {
        if(i>=22 && i<=25)
        {
            double sum;
            sum+=a[i];
            avg= sum/4;
        }
    }
    cout<<avg;

    cout<<"\nJuly: ";
    for(int i=0; i<n; i++)
    {
        if(i>=26 && i<=29)
        {
            double sum;
            sum+=a[i];
            avg= sum/4;
        }
    }
    cout<<avg;

    cout<<"\nAugust: ";
    for(int i=0; i<n; i++)
    {
        if(i>=30 && i<=34)
        {
            double sum;
            sum+=a[i];
            avg= sum/5;
        }
    }
    cout<<avg;

    cout<<"\nSeptember: ";
    for(int i=0; i<n; i++)
    {
        if(i>=35 && i<=38)
        {
            double sum;
            sum+=a[i];
            avg= sum/4;
        }
    }
    cout<<avg;

    cout<<"\nOctober: ";
    for(int i=0; i<n; i++)
    {
        if(i>=39 && i<=43)
        {
            double sum;
            sum+=a[i];
            avg= sum/5;
        }
    }
    cout<<avg;

    cout<<"\nNovember: ";
    for(int i=0; i<n; i++)
    {
        if(i>=44 && i<=47)
        {
            double sum;
            sum+=a[i];
            avg= sum/4;
        }
    }
    cout<<avg;

    cout<<"\nDecember: ";
    for(int i=0; i<n; i++)
    {
        if(i>=48 && i<=51)
        {
            double sum;
            sum+=a[i];
            avg= sum/4;
        }
    }
    cout<<avg;
}