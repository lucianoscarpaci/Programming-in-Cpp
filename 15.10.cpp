/* program displays total amount of rain received and average
monthly rainfall */

#include<iostream>
using namespace std;

int main()
{
    //Declare required variables
    int years;
    double inch;
    double sum=0.0;

    //Take the input for the years
    cout<<"Enter number of years: ";
    cin>>years;

    //Input validation
    if(years<1)
    {
        cout<<"Invalid years. Please enter again: ";
        cin>>years;
    }
    //Iterate through number of years
    for(int i=1; i <= years; i++)
    {
        //Iterate through each 12 months of the year
        for(int j=1; j<=12; j++)
        {
            //Take input for inches of rain in a month
            cout<<"Inches of rainfall received during the month "
            <<j<<" of "<<i<<" year: ";
            cin>>inch;
            //Input validation of inches with if-block
            if(inch<0)
            {
                cout<<"Invalid number. Please enter again: ";
                cin>>inch;
            }
            //Calc the total inches of rain in a month
            sum += inch;
        }
    }
    //Display the final results
    cout<<"Total number of months: "<<(years*12)<<endl;
    cout<<"Total rainfalls: "<<sum<<endl;
    cout<<"  Average monthly rain: "<<sum/(years*12)<<endl;

    return 0;
}
