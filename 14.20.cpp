/* The program displays the time taken by sound wave
to travel in air, water or steel, according to menu choice */
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Declare variables
    char medium;
    double dist, time;
    //Display message to enter the medium
    cout << "Enter the medium in which the sound wave is travelling:\n";
    cout << "A. Air\nB. Water\n C. Steel\n";
    cin >> medium;
    //Display the message to enter the distance sound travels
    cout << dist;
    //Validate only positive distances
    if(dist >= 0)
    {
        switch (medium)
        {
        case 'a':
        case 'A':
            time = (dist / 1100);
            break;
        case 'b':
        case 'B':
            time = (dist / 4900);
            break;
        case 'c':
        case 'C':
            time = (dist / 16400);
            break;
        default:
        cout << "Invalid choice! Try again.\n";
        return 0;
        }
        //Display the error message for invalid medium
        cout << "The time taken by the sound wave is ";
        cout << fixed << setprecision(4) << time <<" seconds.\n";

    }
    else{
        cout << "Invalid input! Distance less than 0 is not accepted!";
    }
    return 0;
}