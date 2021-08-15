#include<iostream>
#include<iomanip>
using namespace std;

//declare double function to calculate the charges
double calculateCharges(double);
//the main function
int main(){
    //a variable first is used to accept the parking 
    // hours for the first car
    //variable second is used to accept the parking
    //hours for the second car
    //variable third is used to accept the parking
    //hours for the third car
    //variable hours is used to represent the parking hours
    double first, second, third;
    //ask user to enter the hours for three customers
    cout << "Enter hours for three customers " << endl;
    cout << "Hours for first customer: "; cin>>first;
    cout << "Hours for second customer: "; cin>>second;
    cout << "Hours for third customer: "; cin>>third;
    //horizontal header for car hours charge
    cout << "Car\tHours\tCharge\n";
    //create the table
    cout << "1\t" << fixed << setprecision(1)<< first<<setprecision(2) << "\t" << calculateCharges(first)<<endl;
    cout << "2\t" << fixed << setprecision(1)<< second<<setprecision(2) << "\t" << calculateCharges(second)<<endl;
    cout << "3\t" << fixed << setprecision(1)<< third<<setprecision(2) << "\t" << calculateCharges(third)<<endl;
    //Calc the total by adding first second and third charges
    cout << "TOTAL\t" << fixed << setprecision(1)<< first + second + third<< fixed << setprecision(2) << "\t"
    << calculateCharges(first) + calculateCharges(second) + calculateCharges(third)<<endl;
    return 0;
}
//double calccharges hours
double calculateCharges(double hours)
{
    //if hours less than 3
    if(hours < 3)
    //return 20.00
    return 20.00;
    //else than if hours is less than 24
    else
    {
        if(hours < 24)
        return 20.00 + (hours - 3)*5;
        else
        return 50.00;
    }
}