//This program calculates minimum amount of insurance for property
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Constant variable declaration
    const float INSURE_PERCENTAGE = .80;
    //Variable declaration of float type
    float replacement_cost, min_amount_insurance;
    //Ask the user to press Enter key
    cout << "Press \"Enter\" to continue.\n"     <<endl;
    cin.get();

    //Display a message
    cout << "This program will calculate the 80 "  <<endl;
    cout << "percent for you. " << endl;
    cout << "                                  \n\n";
    //Ask the user to input replacement cost
    cout<<"Enter the replacement cost of your "  <<endl;
    cout<<"home or building     : $";
    cin >> replacement_cost;

    // Calculate the minimum amount for insurance
    min_amount_insurance = replacement_cost * INSURE_PERCENTAGE;

    //Display minimum amount to buy for property
    cout << setprecision(2) << fixed;
    //Display result
    cout << "The minimum amount of insurance " << endl;
    cout << "to buy is     : $";
    cout << min_amount_insurance << endl;
    return 0;
}