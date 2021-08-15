/* This program is to calculate the distance of the sound
source from the directory as per speed input entered
by the user and speed of sound as chosen by the user. */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    int medium;
    double dist, time;
    //Display the message to enter the medium number
    cout << "Enter the medium: \n";
    cout << "1. Carbon Dioxide\n2. Air\n3.Helium\n4.Hydrogen\n";
    cout << "Enter 1, 2, 3, or 4:\n";
    cin >> medium;
    cout << "Enter the time in seconds (0-30)\n";
    cin >> time;

    //Input validation
    if(time >= 0 && time <=30){

        switch(medium){
            case 1:
                dist = time*258.0;
                break;
            case 2:
                dist = time*331.5;
                break;
            case 3:
                dist = time*972.0;
                break;
            case 4:
                dist = time*1270.0;
                break;
            default:
                cout << "Invalid choice! Enter from the available medium!";
                return 0;
        }
   }
   else{
       cout << "Invalid input! Enter a time within 0 and 30.!\n";
       return 0;
   }
   //Display the output
   cout << "The distance from the source is ";
   cout << dist << " meters.\n";
   return 0;
}