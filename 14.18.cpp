/* The program displays the percentage of calories as fat according to the user input of
total calories and grams of fat. */
#include<iostream>
using namespace std;
int main()
{
    //Declare variables
    double calories, fat_grams;
    //Display the message to enter number of calories
    cout << "Enter number of calories: \n";
    cin >> calories;
    //Display the message to enter fat gram
    cout << "Enter grams of fat: \n";
    cin >> fat_grams;

    //Validate input for non-negative values
    if(calories > 0 && fat_grams > 0)
    {
        if(fat_grams*9 <= calories)
        {
            //Check if fat calories are less than 30% of total calories
            if (((fat_grams*9)/calories) < 0.3)
                cout << "Low fat food!\n";
            else
                cout << ((fat_grams*9)/calories)*100 << "% of calories come from fat.\n";
        }
        else{
            cout << "Invalid input! Fat grams must be less than total calories! \n";
        }
    }
    else{
        cout << "Invalid input! Enter values must be more than 0!\n";
    }
    return 0;
}