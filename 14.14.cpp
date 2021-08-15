/* The program displays the bank service fees according to initial balance
and number of checks signed by the customer. */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    int checks;
    double balance, fee = 10.0;

    //Display the message to enter the number of checks signed
    cout << "Enter the number of checks signed: \n";
    cin >> checks;

    //The if block to validate checks input
    if(checks >= 0){

        //Display the message to enter the starting balance
        cout << "Enter the starting balance:\n";
        cin >> balance;
        //if statement to validate balance
        if(balance >= 0){
            //Deduct monthly fee from the balance
            balance = balance - fee;

            //Add extra 15 if balance is below 400
            if(balance < 400)
                fee = fee + 15;
            //if-else statement to calc the fees according to num of checks
            if(checks < 20)
                fee += (checks * 0.1);
            else if(checks < 40)
                fee += (checks * 0.08);
            else if(checks < 60)
                fee += (checks * 0.06);
            else if(checks >= 60)
                fee += (checks * 0.04);
            
            //Display the monthly fee
            cout << "The monthly service fee is "<<fee<<".\n";
        }
        else{
            //Display the message
            cout << "Account is overdrawn!\n";
        }
    }
    return 0;
}