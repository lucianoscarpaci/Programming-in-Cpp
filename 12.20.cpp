/* how many gallons on a fence program */
#include<iostream>
using namespace std;

int main()
{
    //Declare and initialize variables
    const int SQFT_GAL=340;
    double h=6, l=100;
    double twocoats=2;

    //Declare double variable to calc the total
    double gallons = (h*l*twocoats)/SQFT_GAL;

    //Display the paint
    cout<<gallons<<" gallons paint will be required. "<<endl;

    return 0;
}