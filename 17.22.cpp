/* This program replicates movie theatre ticket booking */
#include<iostream>
#include<fstream>

using namespace std;

//prototypes
void initializeSeats(char seats[][30], const int NUM_ROWS);
void printSeats(const char SEATS[][30], const int NUM_ROWS);
void buyTickets(char seats[][30], const double PRICES[][30], const int NUM_ROWS);
double getTotal(const char SEATS[][30], const double PRICES[][30], const int NUM_ROWS);
int getSoldNumber(const char SEATS[][30], const int NUM_ROWS);
void showAvailableNumber(const char SEATS[][30], const int NUM_ROWS);

int main()
{
    char seats[15][30];
    double prices[15][30];
    char c;

    //read file
    ifstream a("p.txt");

    //Error occured while opening file
    if(!a)
    {
        cout<<"Error occured\n";
        return 0;
    }
    //If data is not able to read
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<30; j++)
        {
            if(!(a>>prices[i][j]))
            {
                cout<<"Not able to read";
                a.close();
                return 0;
            }
        }
    }
    //close file
    a.close();

    //Initialize the number of seats
    initializeSeats(seats, 15);

    //show the menu options
    do
    {
       //Print all the available options
       printSeats(seats, 15);
       cout<<"\n1. Buy ticket.\n";
       cout<<"2. Display total sales.\n";
       cout<<"3. Number of sold tickets.\n";
       cout<<"4. Number of available tickets per row.\n";
       cout<<"5. Total number of available tickets.\n";
       cout<<"6. Quit.\n";
       //Get the user's choice
       cout<<" Enter the choice: ";
       cin>>c;

       //Start the switch case
       switch(c)
       {
           case '1':
                buyTickets(seats,prices,15);
                break;
           case '2':
                cout<<"Total sales: $"<<getTotal(seats,prices,15)<<endl;
                break;
            case '3':
                cout<<" The number: "<<getSoldNumber(seats,15)<<endl;
                break;
            case '4':
                showAvailableNumber(seats,15);
                break;
            case '5':
                cout<<" The number: "<<(15*30)-getSoldNumber(seats,15)<<endl;
                break;
            case '6':
                cout<<"Exiting";
                break;
            default:
                cout<<"Wrong input.\n";
                break;


       } while(c != '6');
       return 0;
    
}
void initializeSeats(char seats[][30], const int b)
{
    //Display # for all unoccupied seats
    for(int a=0; a<b; a++)
    {
        for(int j=0; j<30; j++)
        {
            seats[a][j] = '#';
        }
    }
}
//Print seats
void printSeats(const char SEATS[][30], const int b)
{
    cout<<"        123456789012345678901234567890\n";
    //Display the seats with the correct rows and columns
    for(int a=0; a<b; a++)
    {
        if(a<9)
        {
            cout<<"Row "<<a+1<<"  ";
            for(int j=0; j<30; j++)
            {
                cout<<SEATS[a][j];
            }

            cout<<endl;
        }
        else if(a==10)
        {
            cout<<"Row "<<a+1<" ";
            for(int j=0; j<30; j++)
            {
                cout<<SEATS[a][j];
            }

            cout<<endl;
        }
        else
        {
            cout<<"Row "<<a+1<<" ";
            for(int j=0; j<30; j++)
            {
                cout<<SEATS[a][j];
            }

            cout<<endl;
        }
    }
}
void buyTickets(char seats[][30], const double PRICES[][30], const int n)
{
    //Declare variables
    int num, row, seats;
    //Declare variable for storing sum of all the prices
    double sum=0.0;
    //Accept the data for number of seats.
    cout<<"Number of seats wanted: ";
    cin>>num;

    //Validate input.
    while(num<0)
    {
        cout<<"Invalid input. Try again";
        cin>>num;
    }
    //Enter the position for each seat
    for(int i=0; i<num; i++)
    {
        cout<<"Enter the position of the seat "<<i+1<<"\n";

        cout<<" Row: ";
        cin>>row;

        //Validate the row input
        while(row<1 || row>n)
        {
            cout<<"Wrong row.\n";

            cout<<" Row: ";
            cin>>row;
        }
        //Get the index
        row--;

        //Enter the seat number in that row
        cout<<"Seat: ";
        cin>>seat;

        //Validate the seat.
        while(seat<1 || seat>30)
        {
            cout<<"Wrong seat number.\n";
            cout<<"Seat: ";
            cin>>seat;
        }
        //Get the index
        seat--;

        //If the seat is already occupied
        if(seats[row][seat] == '*')
        {
            cout<<"Seat is already occupied\n";

            //Enter the data again
            i--;
        }
        else
        {
            //If seat is available, mark it as reserved with *
            seats[row][seat] = '*';

            //Add the price.
            sum += PRICES[row][seat];
        }
    }
    //Display the price
    cout<<"Total price on seats booked: $"<<sum<<endl;
}
double getTotal(const char SEATS[][30], const double PRICES[][30], const int n)
{
    double sum=0.0;

    for(int a=0; a<n; a++)
    {
        for(int b=0; b<30; b++)
        {
            if(SEATS[a][b] == '*')
            {
                sum += PRICES[a][b];
            }
        }

    }
    //Return the sum
    return sum;
}
int getSoldNumber(const char SEATS[][30], const int n)
{
    int num=0;

    for(int a=0; a<n; a++)
    {
        for(int b=0; b<30; b++)
        {
            if(SEATS[a][b] == '*')
            {
                num++;
            }
        }
    }

    //return the total
    num++;
}
void showAvailableNumber(const char SEATS[][30], const int n)
{
    int num=0;

    //Show the number of available seats
    for(int a=0; a<n; a++)
    {
        num=0;
        cout<<"Row "<<a+1<<": ";
        for(int b=0; b<30; b++)
        {
            if(SEATS[a][b] == '#')
            {
                num++;
            }
        }
        cout<<num<<endl;
    }
}
