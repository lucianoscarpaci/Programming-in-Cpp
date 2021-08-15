/* The program displays the BMI of a person and checks whether
they have optimal weight, or whether they are underweight or overweight */
#include<iostream>
using namespace std;

int main()
{
    //Variable declarations
    int hght, wght;
    double bmi;

    //Display message to enter height (in inches)
    cout<<"Enter the height (in inches): ";
    cin>>hght;
    //Display message to enter weight
    cout<<"Enter the weight (in lbs): ";
    cin>>wght;
    
    //Calculate the BMI using formula
    bmi = (wght*730)/(hght*hght);

    //Display calculated BMI
    cout<<"The BMI is"<<" "<<bmi<<endl;

    //If BMI is less than 18.5
    if(bmi<18.5)
    {
        cout<<"The person is underweight."<<endl;
    }
    else if(bmi>25)
    {
        cout<<"The person is overweight."<<endl;
    }
    else
    {
        cout<<"The person has optimal weight."<<endl;
    }

    return 0;
}