/* The program displays the type of wave according to the wavelength entered by the user. */
#include<iostream>
#include<string>
using namespace std;

int main()
{
    //Variable declaration
    double wave_length;
    string wave_type;
    //Display the message to enter the wavelength
    cout << "Enter wavelength in meters using E notation:\n";
    cin >> wave_length;
    //if-else-if statement to determine wave type
    if(wave_length <= 1E-11)
        wave_type = "Gamma Rays";
    else if(1E-11 < wave_length && wave_length <= 1E-8)
        wave_type = "X Rays";
    else if(1E-8 < wave_length && wave_length <= 4E-7)
        wave_type = "Ultraviolet";
    else if(4E-7 < wave_length && wave_length <= 7E-7)
        wave_type = "Visible Light";
    else if(7E-7 < wave_length && wave_length <= 1E-3)
        wave_type = "Infrared";
    else if(1E-3 < wave_length && wave_length <= 1E-2)
        wave_type = "Microwaves";
    else
        wave_type = "Radio Waves";
    //Display output message
    cout << "It is " << wave_type<<".\n";
    return 0;
}