#include<iostream>
using namespace std;

/* Class Account
a. Public member:
    i. account
    ii. credit
    iii. debit
    iv. getAccountBalance
b. Private member:
    i. accountBalance
*/
class Account
{
    public:
        Account(double);
        void credit(double);
        void debit(double);
        double getAccountBalance();
    private:
        double accountBalance;
};
//Constructor 'scope resolution operator (::) because accessing class members outside the class
Account::Account(double balance)
{
    //Accept initial balance from user
    if(balance>=0){
        accountBalance=balance;
    }
    else{
        accountBalance=0;
        cout<<"Initial balance is Null."<<endl;
    }
}
/* Tests for the credit amount
    a. Accept the new credit amount in the core bank balance
    b. Add the new amount with core balance
    i. accountBalance=accountBalance+new_bal;
    ii. accountBalance=accountBalance+balance;
*/
Account::credit(double balance)
{
    float new_bal;
    cout<<"Do you want to add more balance?"<<endl;
    cout<<"If yes then enter the amount else enter Zero"<<endl;
    //Accept the credited amount from the user
    cin>>new_bal;
    //add the value of new_bal to accountBalance
    accountBalance += new_bal;
    //update the balance 
    accountBalance += balance;
}
/* Tests for the debit amount
    a. Tests the desirable amount and bank balance
    i. if(accountBalance>=balance);
        i. return 0
    ii. else:
        i. Accept the debit amount
        ii. accountBalance = accountBalance - amount;
        iii. accountBalance = accountBalance - balance;
*/
Account::debit(double balance)
{
    //Tests the account balance then perform the actions
    int value=0;
    cout<<"Do you want to debit the money"<<endl;
    cout<<"if Yes: press 1\nif No: press 0"<<endl;
    switch(value){
        case 1:
            if(accountBalance>=balance){
                float amount;
                cout<<"Enter the amount: "<<endl;
                cin>>amount;
                if (amount>accountBalance)
                {
                    cout<<"Debit amount exceeded account balance."<<endl;
                }
                else
                {
                    accountBalance -= amount;
                    //update the balance
                    accountBalance -= balance;
                }
                break;
            }
            break;
    }
}
// Print the final account balance
double Account::getAccountBalance()
{
    return accountBalance;
}
int main()
{
    //object of the account class
    Account Account1(800);
    //print the initial balance
    cout<<"Account's initial balance is: "<< Account.getAccountBalance()<<endl;
    //the credited amount default zero
    Account1.credit(0);
    //if credited then update the balance
    cout<<"\nAccount's balance is: "<<Account1.getAccountBalance()<<endl;
    //The debited amount default zero
    Account1.debit(0);
    //if debited then update the balance
    cout<< "\nAccount's balance is: "<<Account1.getAccountBalance()<<endl;
}
