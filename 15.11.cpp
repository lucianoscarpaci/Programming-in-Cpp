// Program calculates size of a population of organisms.
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Variable declarations
    int Days, SizeOfloop;
    double DailyIncrease;
    //Prompt user to enter data.
    cout<<endl;
    cout<<"Starting population or starting number of organisms:";
    cin>>SizeOfloop;

    cout<<endl;
    cout<< "Daily increasing population or the average daily population";
    cin>>DailyIncrease;

    cout<<endl;
    cout<< "The number of days of growth: ";
    cin>>Days;

    //Input Validation
    while (SizeOfloop<2 || DailyIncrease< 0 || Days < 1)
    {
        //If SizeOfloop<2 than conditions apply
        if (SizeOfloop< 2)
        {
            cout<< "Please enter a number that is not less than 2: ";
            cin>>SizeOfloop;
        }
        //Daily population increase must be greater than 2
        else if (DailyIncrease< 0)
        {
            cout<<"Please enter a non-negative daily increase: ";
            cin>>DailyIncrease;
        }
        //Number of days must be greater than 1
        else if (Days < 1)
        {
            cout<<"Please enter a number that is not less than 1: ";
            cin>>Days;
        }

        //Calc and display daily increase
        cout<<"\nTable displaying population increase over "<< Days << " days.\n"
        <<"\t" " Day" "\t" "Size of population\n"<<endl;

        for(int X=1; X <= Days; X++)
        {
            cout<<setw(2)<<"\t"<<X<<"\t\t"<<SizeOfloop<<endl;
            SizeOfloop *= (1 + (DailyIncrease / 100));
        }
    }
    return 0;
}