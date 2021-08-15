//Creating and manipulating an Account object
#include<iostream>
#include<string>
using namespace std;

int main(){
    Account myAccount; //create object myAccount

    //show initial value of myAccount name is empty string
    cout << "initial account name is: " << myAccount.getName();

    //prompt for and read name
    cout << "\nPlease enter the account name: ";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);

    //display the name stored in the object myAccount
    cout << "Name in object myAccount is: "
    << myAccount.getName() << endl;

    return 0;
}