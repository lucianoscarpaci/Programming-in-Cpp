#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    //variable initialization
    double miles,gallons;
    double totMiles=0.0;
    double totGallons=0.0;
    double thisMPG,totMPG;

    //accept input from user
    cout<<"\nEnter miles driven(-1 to quit): ";
    cin>>miles;

    //discount the negative nums
    while(miles!=-1){

        //accept the gallons
        cout<<"Enter gallons used: ";
        cin>>gallons:

        //compute total miles
        totMiles += miles;

        //computes gallons
        totGallons += gallons;

        //computes the total MPG
        thisMPG /= gallons;
        totMPG /= totGallons;

        //print the output
        cout<<"MPG this trip:"<<setprecision(8)<<thisMPG<<endl;
        cout<<"Total MPG: "<<setprecision(8)<<totMPG<<endl;
        cout<<"\nEnter miles driven(-1 to quit): ";
        cin>>miles;

    }
    return 0;
}