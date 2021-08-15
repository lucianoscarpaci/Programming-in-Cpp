//function that calcs the volume of a cube
#include<iostream>
using namespace std;

//Definition of the cube.
inline double cube(const double side){
    return side * side * side;
}

int main(){
    double sideValue;
    cout<<"Enter the side length of your cube: ";
    cin>>sideValue;

    //calculate cube of sideValue and display result
    cout<<"Volume of cube with side ";
    <<sideValue<<" is "<<cube(sideValue) << endl;

    return 0;
}