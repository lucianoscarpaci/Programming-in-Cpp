/* This program calculates the number of tickets sold at the box office */
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //Variables
    const float APQ = 10,
    CPV = 6, PRO = 0.20;
    //string
    string mo_on;
    int adult_t, child_t,
    float total, t_p, P_d;

    //Prompt the user for the movie name
    cout<< "\nPlease enter the name of the movie: ";
    getline(cin, mo_on);

    cout<<"\nHow many adult tickets? ";
    cin>>adult_t;
    cout<<"How many child tickets? ";
    cin>>child_t;

    //Calc the gross profits
    total = (adult_t * APQ) + (child_t * CPV);
    //Calc net profit
    t_p = total * PRO;
    //Calc paid amount to distribute
    P_d = total - t_p;
    //Print report
    cout<<setprecision(2) <<fixed;
    cout<< "\nMovie Name: ";
    cout<<mo_on<<'\"'<<endl;
    cout<<"The number of adult tickets sold: "<<setw(6);
    cout<<adult_t;


}
