//A C++ program that calculates the hypotnuse of a right triangle
#include<iostream>
//to prompt the table
#include<iomanip>
using namespace std;
//function prototype
double calculateHypotenuse(double,double);
//Global variable declaration
double side1;
double side2;
double hypotenuse;
int main(){
    cout<<"calculates the Hypotenuse of a right triangle "<<endl<<endl;
    cout<< "Triangle\tSide1\tSide2\tHypotenuse"<<endl;
    cout<<"1\t"<<"\t3.0"<<setprecision(1)<<"\t4.0"<<setprecision(2)<<"\t"<<calculateHypotenuse(3.0,4.0)<<endl;
    cout<<"2\t"<<"\t5.0"<<setprecision(1)<<"\t12.0"<<setprecision(2)<<"\t"<<calculateHypotenuse(5.0,12.0)<<endl;
    cout<<"3\t"<<"\t8.0"<<setprecision(1)<<"\t8.0"<<setprecision(2)<<"\t"<<calculateHypotenuse(8.0,8.0)<<endl;
    return 0;
}
double calculateHypotenuse(double side1,double side2)
{
    //calc the hypotenuse
    hypotenuse = sqrt(side1*side1+side2*side2);
    return hypotenuse;
}
