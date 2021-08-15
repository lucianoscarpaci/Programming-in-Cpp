/* This program converts temperature in Celsius to Fahrenheit */
#include<iostream>
using namespace std;

int main()
{
    float f, c;

    //Aks the user to enter temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    //Calculate Fahrenheit temperature
    f = (9.0*c/5.0)+32;
    //show fahrenheit temperature
    cout << "Equivalent Fahrenheit temperature is: "<< f;

    return 0;
}




