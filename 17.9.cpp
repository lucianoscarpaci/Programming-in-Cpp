/* Program takes input for hours and
pay rate of seven employees and displays
their gross pay and employee ID. */
#include<iostream>
using namespace std;

int main()
{
    //Declare the arrays needed
    long empId[7] = {5658000, 8001207, 4520233, 1402770, 7565652, 3380669, 4477741};
    int hours[7];
    double payRate[7];
    double wages[7];
    //Take input for hours[] and payRate[] arrays.
    cout<<"EMPLOYEE DATA: \n";

    //for loop to iterate
    for(int i=0; i<7; i++)
    {
        cout<<"Employee ID: "<<empId[i]<<endl;
        cout<<"Hours: ";
        cin>>hours[i];

        //Input validation
        while(hours[i] < 0)
        {
            cout<<" Hours cannot be negative";
            cin>>hours[i];
        }

        cout<<"Pay Rate: $";
        cin>>payRate[i];

        //Input validation
        while(payRate[i] < 15.0)
        {
            cout<<"Pay rate cannot be less than $15.00";
            cin>>payRate[i];
        }

        //Compute the wage
        wages[i] = hours[i] * payRate[i];
    }

    //print the results.
    cout<<"Complete data of employees\n";
    for(int i=0; i<7; i++)
    {
        cout<<"Employee ID: "<<empId[i]<<endl;
        cout<<"Wage: $"<<wages<<endl;
    }
    return 0;
}