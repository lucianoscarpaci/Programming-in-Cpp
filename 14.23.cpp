/* The program displays the calculated area based on the choices entered by the user */
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    //Declare variables
    int ch;
    double radius, length, width, base, height, PI;
    bool valid;

    //Create menu
    cout << "Geometry Calculator" <<endl;
    cout <<" 1. Calculate the Area of the Circle"<<endl;
    cout <<" 2. Calculate the Area of the Rectangle"<<endl;
    cout <<" 3. Calculate the Area of the Triangle"<<endl;
    cout <<" 4. Quit"<<endl;
    cout <<" Enter your choice(1-4): ";
    cin>>ch;

    //If block for choice 1
    if(ch == 1)
    {
        //Initialize PI
        PI = 3.14159;

        //Display the message and take input
        cout<< "Enter radius: " <<endl;
        cin>>radius;
        //valid will be true if input is positive number
        valid = (radius > 0);

        //If block for valid input
        if(valid)
        {
            //Calculate and print area
            cout<< "The area of the circle is: ";
            cout<<pow(radius, 2)*PI << " sq. units." <<endl;
        }
        else
        {
            cout << "Invalid input!" <<endl;
        }
    }
    //else if block for choice 2
    else if(ch == 2)
    {
        //Display message to enter and take input
        cout << "Enter the length and width of the rectangle: "<<endl;
        cin>>length>>width;

        //Valid is true if both length and width are positive
        valid = (length> 0) && (width> 0);

        //If block for valid input
        if(valid)
        {
            cout<<"The area of the Rectangle is: ";
            cout<<length*width<<" sq. units." <<endl;
        }
        else
        {
            cout<< "Invalid input!" <<endl;
        }
    }
    //Else if block for choice 3
    else if(ch == 3)
    {
        //Display message to user to enter and take input
        cout<<"Enter base and height of a triangle: " <<endl;
        cin>>base>>height;

        //Valid is true if both base and height positive
        valid = (base> 0) && (height> 0);

        //If block for valid input
        if(valid)
        {
            //Calculate and print area
            cout<< "The area of the triangle is: ";
            cout<<base * height * 0.5 << " sq. units."<<endl;
        }
        else
        {
            cout<< "Invalid input!" <<endl;
        }
    }
    //Else block for choice
    else if(ch<1 || ch>= 5)
    {
        cout<< "Invalid choice! Try again" <<endl;
    }

    return 0;
}