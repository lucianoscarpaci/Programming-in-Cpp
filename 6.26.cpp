//C++ progam to evaluate the temperature
//in celsius and fahrenheit
#include<iostream>
#include<iomanip>
using namespace std;
//prototypes
double celsius(double);
double fahrenheit(double);
//main
int main(){

    //declare celsius and fahrenheit
    double fah, cels;
    //accept the fahrenheit value
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fah;
    //output enter temperature in celsius
    cout << "Enter temperature in Celsius: ";
    //accept the celsius value
    cin >> cels;
    //celsius fahrenheit table for result
    cout <<"Celsius\tFahrenheit\n" <<fixed << setprecision(2);
    //output celsius and fahrenheit


}