//C++ program that uses an Inline function that calculates the volume of the sphere
#include<iostream>
//use math library function
#include<cmath>
//program that uses names from std namespace
using namespace std;
//define global constant PI
const double PI = 3.14159;
//inline function that calculates the volume of a sphere
inline double sphereVolume(const double radius)
{
    return 4.0 / 3.0 * PI * pow(radius, 3);
}
//the main
int main()
{
    //declare radiusVolume double
    double radiusVolume;
    //Tell user to enter the length of the radius
    cout << "Enter the length of the radius of your sphere: ";
    cin >> radiusValue;
    //use radiusValue to calculate volume of sphere and display result
    cout << "Volume of sphere with radius " << radiusValue <<" is "<<sphereVolume(radiusValue)<<endl;
    return 0;
}