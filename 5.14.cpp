#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/* Define the main
    a. i. Set the principle to 1000
       ii. Set the rate to 5%
    b. Init the for loop for 1 to 10
        i. Computes the compound interest
        ii. amount = principle * pow(1.0 + rate + year)
        iii. increment the year by 1
        iv. print the compound interest of 10 years
*/
int main(){
    cout<<fixed<<setprecision(2); //set the decimal two places
    double principle{1000.00};
    double rate{0.05};
    //print the initial principle and rate
    cout<<"Initial principle: "<<principle<<endl;
    cout<<"Interest rate: "<<rate<<endl;
    //display headers
    cout<<"\nYear" <<setw(20)<<"Amount on deposit"<<endl;
    //part b
    for(unsigned int year{1}; year <= 10; year++) {
        //calculate amount on deposit at the end of the specified year
        double amount = principle * pow(1.0 + rate, year);
        //display the year and the amount
        cout << setw(4) << year << setw(20) << amount << endl;
    }

    //for rate=6%
    cout<<fixed<<setprecision(2);
    //initial amount before interest
    //interest rate
    double principle1{1000.00};
    double rate1{0.06};
    cout<<"\nInitial principle: "<<principle1<<endl;
    cout<<" Interest rate: "<<rate1<<endl;
    //display headers
    cout << "\nYear" <<setw(20)<<"Amount on deposit"<<endl;
    //calculate amount on deposit for each 10 years
    for(unsigned int year{1}; year <= 10; year++){
        double amount = principle1 * pow(1.0 + rate1, year);
        cout << setw(4) << year << setw(20) << amount << endl;
    }

    


}