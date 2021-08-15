/* This program displays total cost of purchase for given number of units by user. */

#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    int countPackage;
    double price;

    //Display a message to enter the number of packages.
    cout << "Enter the number of packages to purchase: \n";
    cin >> countPackage;

    //Calculate initial price
    price = countPackage * 99;

    //If statement to validate the input
    if(countPackage<=0){
        cout << "Invalid input! Enter a number greater than 0! Try again.\n";
    }

    //The else-if-else statement to display total after discount
    else if(countPackage<10){
        cout << "The total cost is $"<<price<<".\n";
    }
    else if(10<=countPackage && countPackage<20){
        cout << "The total cost is $"<<price * 0.8 << ".\n";
    }
    else if(20 <= countPackage && countPackage<50){
        cout << "The total cost is $"<<price * 0.7 << ".\n";
    }
    else if(50 <= countPackage && countPackage<100){
        cout << "The total cost is $"<<price * 0.6 << ".\n";
    }
    else{
        cout << "The total cost is $"<<price * 0.5 << ".\n";
    }
    return 0;
}