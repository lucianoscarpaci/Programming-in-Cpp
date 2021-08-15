//program to calculate the number of salespeople for the week
#include<iostream>
#include<array>
#include<iomanip>
using namespace std;
//constant to declare array size
const size_t arraySize { 10 };
//function prototype with one parameter as one dimension 
void salesCommission(array<int, arraySize>& amount);
void displayRange(const array<int, arraySize>& dollars);
int main(){
    //array to hold salaries
    array<int, arraySize> counter { 0 };
    //function call that passes array
    salesCommission(counter);
    displayRange(counter);
    return 0;
}
//function definition to calculate the total salary
void salesCommission(array<int, arraySize>& amount){
    //declare variable to hold employee gross sale
    double sales;
    //(% to calc salary)
    double i = 0.09;
    //prompt message to enter sales amount and -1 to exit
    cout << "Enter weekly gross sales of a salesperson(-1 to exit):";
    cin >> sales;
    while (sales != -1)
    {
        double salary = 200.0 + sales * i;
        cout << setprecision(2) <<fixed<<"The total commission of a salesperson is"
        << salary << endl;
        //increment array element for the salary range
        if (salary >= 1000){
            amount[10]++;
        }
        else if (salary >= 200){
            amount[salary / 100]++;
        }
        //prompt message to enter sales amount and -1 to exit
        cout << "Enter weekly gross sales of a salesperson(-1 to exit):";
        cin >> sales;

    }
}
    //display table of salary ranges and no. of employees in each range
void displayRange(const array<int, arraySize>& dollars){
    cout << "Salespeople in the range:";
    //loop to display number of employees in a salary range
    for (size_t i{ 2 }; i < 10; ++i)
        cout << "\n$" << i << "00-" << i << "99 : " << dollars[i];
    cout << "\n$1000 and over: " << dollars[10] << endl;
}

