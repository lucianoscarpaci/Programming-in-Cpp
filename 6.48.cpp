//C++ program to calculate area of a circle
#include<iostream>
#include<cmath>
//function declare
inline double circleArea(double);
using namespace std;

int main()
{
    //declare radius
    double radius;
    //output enter radius
    cout<<"Enter the radius: "; cin>>radius;
    //output the area and call area function
    cout<<"The area of the circle is: "<<circleArea(radius)<<endl;
    return 0;
}
double circleArea(double radiusCircle)
{
    //declare area_circle to store result
    float area_circle;
    //evaluate the area of the circle
    area_circle = M_PI * radiusCircle * radiusCircle;
    //return 
    return area_circle;

}