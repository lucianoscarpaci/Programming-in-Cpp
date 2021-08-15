//C++ program to demonstrate working of enum classes

#include<iostream>
using namespace std;

int main()
{
    //enum declarations
    enum class AccountType {SAVINGS, CHECKING, INVESTMENT};
    //instnatiating enum class
    AccountType x = AccountType::SAVINGS;
    AccountType y = AccountType::CHECKING;
    AccountType z = AccountType::INVESTMENT;
    //tests the conditions and prompts the message
    if(x == AccountType::SAVINGS)
        cout << "The saving is: 1000 $"<<endl;
    else
        cout << "No savings";
    
    if(y == AccountType::CHECKING)
        cout << "The account is valid"<<endl;
    else
        cout << "No valid account";
    
    //comparison is type-safe
    if(z == AccountType::INVESTMENT)
        cout << "The investment is: $500"<<endl;
    else
        cout << "No investment";
    
    return 0;
    
    

}