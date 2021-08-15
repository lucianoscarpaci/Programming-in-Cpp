/* The program displays the number of points awarded to a customer
according to the number of books purchased. */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    int books, points;

    //Display the message to enter the number of books
    cout << "Enter the number of books purchased:\n";
    cin >> books;

    //Switch case statement to award points according to the books
    switch (books)
    {
        case 0:
            points = 0;
            break;
        case 1:
            points = 5;
            break;
        case 2:
            points = 15;
            break;
        case 3:
            points = 30;
            break;
        default:
            points = 60;
    }
    //Display the points
    cout << "The number of points entered are "<<points<<".\n";

    return 0;
}