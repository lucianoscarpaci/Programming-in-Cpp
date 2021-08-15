#include<iostream>
using namespace std;

int main(){

    //variable initialization
    int accountNum;
    double initialBal,totCharges,totCredits,availCredits,updatedBal;

    //accept input from user
    cout<<"\nEnter account number(or -1 to quit: ";
    cin>>accountNum;

    while(accountNum!=-1){

        //Accept bal
        cout<<"Enter beginning balance: ";
        cin>>initialBal;

        cout<<"Enter total charges: ";
        cin>>totCharges;

        cout<<"Enter total credits: ";
        cin>>totCredits;

        cout<<"Enter credit limit";
        cin>>availCredits;

        updatedBal=(initialBal+totCharges-totCredits);

        if(updatedBal>availCredits){
            cout<<"New balance is "<<updatedBal<<endl;
            cout<<"Account: "<<accountNum<<endl;
            cout<<"Credit limit: "<<availCredits<<endl;
            cout<<"Balance: "<<updatedBal<<endl;
        }
        else{
            cout<<"New balance is "<<updatedBal<<endl;
        }

        cout<<"\nEnter account number(or -1 to quit): ";
        cin>>accountNum;
    }
    return 0;
}