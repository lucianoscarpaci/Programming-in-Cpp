/* This program displays the number of floors, rooms in each floor,
occupied rooms and unoccupied rooms in each floor. */
#include<iostream>
using namespace std;

int main()
{
    //Declare the variables
    int floor;
    int room;
    int occupied;
    int sumR=0, sumO=0;

    cout<<"Enter the number of floors: ";
    cin>>floor;

    //Input validation for floors
    if(floor<1)
    {
        cout<<"Floors cannot be less than one. Enter again.";
        cin>>floor;
    }
    //Floor loop to iterate through floors
    for(int x=1; x <= floor; x++)
    {
        if(x == 13)
        {
            continue;
        }
        //Input validation for rooms.
        cout<<"Enter the number of rooms in floor "<<x<<":";
        cin>>room;

        if(room<10)
        {
            cout<<" Rooms cannot be less than ten. Please enter again.";
            cin>>room;
        }
        //Calc the total rooms
        sumR += room;
        cout<<"Enter the number of occupied rooms: ";
        cin>>occupied;

        //Input validation for occupied rooms
        if(occupied<0 || occupied>room)
        {
            cout<<"Invalid occupied rooms. Please try again";
            cin>>occupied;
        }
        //calculate the total occupied rooms
        sumO += occupied;
    }
    //Display the rooms and occupied rooms detail
    cout<<" Total number of rooms: "<<sumR<<endl;
    cout<<" Total number of occupied rooms: "<<sumO<<endl;
    cout<<" Total number of unoccupied rooms: "<<(sumR-sumO)<<endl;
    cout<<" Percentage of occupied: "<<1.0*sumO/sumR<<endl;

    return 0;
}