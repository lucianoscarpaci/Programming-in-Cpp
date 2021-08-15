/* The program suggests steps for fixing a bad Wi-Fi connection */
#include<iostream>
using namespace std;

int main()
{
    //Declare variable named 'choice'
    string choice;

    //Display a message
    cout << "Reboot the computer and try to connect."<<endl;

    //Ask the user to enter yes or no
    cout << "Did that fix the problem (yes/no)" <<endl;

    //Store into variable
    cin>>choice;

    //if-else condition to check for the fix
    if (choice == "yes")
        return 0;
    else
    {
        //Display a message
        cout << "Reboot the router and try to connect."<<endl;

        //Asks the user to enter yes or no
        cout << "Did that fix the problem (yes/no)" <<endl;

        //Store into variable
        cin >> choice;

        //If-else condition to check for the fix
        if(choice == "yes")
            return 0;
        else
        {
            //Display a message
            cout << "Make sure the cables between the router and modem are plugged in firmly."<<endl;

            //Asks the user to enter yes or no
            cout << "Did that fix the problem (yes/no)" << endl;
            cin >> choice;

            //If-else condition to check for the fix
            if (choice == "yes")
                    return 0;
            else
            {
                //Display a message
                cout << "Move the router to a new location and try to connect." << endl;

                //Ask the user to enter yes or no
                cout << "Did that fix the problem? (yes/no)" << endl;
                cin>>choice;

                //If-else condition to check for the fix
                if (choice == "yes")
                        return 0;
                // Display a message
                else 
                    cout << "Get a new router." << endl;
            }
        }
    }
    return 0;
}