#include<iostream>
using namespace std;

//prototype
int passedSeconds(int, int, int);

int main(){
//Accept the time (hour, minute, seconds) for case one
    int hour1, minute1, second1;
//Accept the time (hours, minutes seconds) for case two
    int hour2, minute2, second2;
    cout<<"First Case: "<<endl;
    cout<<"Enter hours: ";
    cin>>hour1;
    cout<<"Enter minutes: ";
    cin>>minute1;
    cout<<"Enter seconds: ";
    cin>>second1;
//while
while(hour1 > 23 || minute1 > 59 || second1 > 59)
{
    if(hour1 > 24)
        cout<<"Invalid hours value!"<<endl;
        cout<<"Enter hours: ";
        cin>>hour1;
    if(minute1 > 60)
        cout<<"Invalid minutes value!"<<endl;
        cout<<"Enter minutes: ";
        cin>>minute1;
    if(second1 > 60)
        cout<<"Invalid seconds value!"<<endl;
        cout<<"Enter seconds: ";
        cin>>second1;
}
//Evaluate the passed seconds
cout << "Passed seconds from last 12 (am or pm): "<< passedSeconds(hour1, minute1, second1)<<endl;
//Case 2 enter hours minutes and seconds for the while 
cout<<"Second Case: "<<endl;
cout<<"Enter hours: ";
cin>>hour2;
cout<<"Enter minutes: ";
cin>>minute2;
cout<<"Enter seconds: ";
cin>>second2;
//while hour2 >23 or min2 >59 or second2 > 59
while(hour2 > 23 || minute2 > 59 || second2 > 59)
{
    //if hour2 > 24
    if(hour2 > 24)
        //output enter correct hours value
        cout<<"Enter correct hours value!";
        //enter hours
        cout<<"Enter hours: ";
        cin>>hours2;
    //if minute2 > 60
    if(minute2 > 60)
        //output enter correct minutes value
        cout<<"Enter correct minutes value!";
        cin>>minute2;
    //if second2 > 60
    if(second2 > 60)
        //output enter correct seconds value
        cout<<"Enter correct seconds value!";
        cin>>second2;
}
cout << "Passed seconds from last 12 (am or pm): " << passedSeconds(hour2,minute2,second2)<<endl<<endl;
//passedSeconds function hours, minutes, seconds
int passedSeconds(int hour, int minute, int second)
{    
    // if(hour >= 12)
    if(hour >= 12)
        // hour -= 12;
        hour -= 12;
        //return hour * 60 * 60 + minute * 60 + second;
        return hour * 60 * 60 + minute * 60 + second;
}

//Evaluate the difference
    //passedSeconds(hour2, minute2, second2) 
    //passedSeconds(hour1, minute1, second1)