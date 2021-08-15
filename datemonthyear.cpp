#include<iostream>
#include<string>

using namespace std;
//defining a class Date
class Date
{
    //access modifier
    public:
    //constructor and function
        Date(int, int, int);
        void setMonth(int);
        int getMonth();
        void setDay(int);
        int getDay();
        void setYear(int);
        int getYear();
        void displayDate();
    private:
    //declare variables
        int month;
        int day;
        int year;
};
//Constructor definition
Date::Date(int m, int d, int y)
{
   //Tests the condtions
   if(m>=1&&<=12)
        month=m;
    else
    {
        month=1;
    }
    day=d;
    year=y; 
}
//set the value for the month variable
void Date::setMonth(int m)
{
    if(m>=1&&m<=12)
        month=m;
    else
    {
        month=1;
    }
}
//set the value for the year variable
void Date::setYear(int y)
{
    year=y;
}
//get the value of the month
int Date::getMonth()
{
    return month;
}
//get the value of the day
int Date::getDay()
{
    return day;
}
//get the value of year
int Date::getYear()
{
    return year;
}
//display the date on the screen
void Date::displayDate()
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}
//the main
int main()
{
    int day, month, year;
    cout<<"Enter the day (between 1 and 31): ";
    cin>>day;
    cout<<"Enter the month (integer value): ";
    cin>>month;
    cout<<"Enter the year: ";
    cin>>year;
    //Object 1 of the class Date
    Date Date1(month,day,year);
    cout<<"Date is: ";
    Date1.displayDate();
    Date1.setMonth(0);
    Date1.setYear(0);
    //Object 2 of the class Date
    cout<<"Enter the day (between 1 and 31): ";
    cin>>day;
    cout<<"Enter the month (integer value): ";
    cin>>month;
    cout<<"Enter the year: ";
    cin>>year;
    Date Date2(month,day,year);
    cout<<"Date is: ";
    Date2.displayDate();
    Date2.setMonth(0);
    Date2.setYear(0);

}