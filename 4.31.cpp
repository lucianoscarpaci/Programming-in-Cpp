#include<iostream>
using namespace std;
#define PI 3.14159

/* Init the main:
    a. Init the variables
    i. Radius of double
    ii. Diameter of double
    iii. Circumference of double
    iv. Area of double
*/
int main(){
    double radius,diameter;
    double area,circumference;

    //double r2
    double r2 = radius*radius;
    //Accept the radius of circle from user
    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    //compute the diameter of the circle
    diameter=2*radius;
    //compute the circumference of the circle
    circumference=2*PI*radius;
    //compute the area of the circle
    area=PI*r2;
    //print the diameter, circumference and area of the circle
    cout<<"The diameter of the circle is: "<<diameter<<endl;
    cout<<"The circumference of the circle is: "<<circumference<<endl;
    cout<<"The area of the circle is: "<<area<"sq unit"<<endl;

    return 0;
}