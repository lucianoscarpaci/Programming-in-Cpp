/* Program acts as a math tutor and asks random question for which user 
predicts the answer */
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    //Declare variables needed
    int a, b, expected, actual;
    int ch;
    char op;

    //Get time to seed srand() function
    unsigned seed = time(0);
    //Seed the srand() function
    srand(seed);
    //Display menu in do-while loop
    do {
        cout << "\n1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Quit\n";
        cout << "Your choice: ";
        cin >> ch;

        //Display error message for invalid choice
        if(ch < 1 || ch > 5){
            cout << "ERROR! Please choose one of the items ";
            continue;
        }

        //Generate two random numbers within range 10-999
        a = (rand() % (999 - 10 + 1)) + 10;
        b = (rand() % (999 - 10 + 1)) + 10;

        //Switch statement to iterate through menu
        switch(ch){
            case 1:
                op='+';
                actual=a+b;
                break;
            case 2:
                op='-';
                actual=a-b;
                break;
            case 3:
                op='*';
                actual=a*b;
                break;
            case 4:
                op='/';
                actual=a/b;
                break;
            case 5:
                return 0;
        }
        //Display the problem
        cout<<"\n "<<a<<endl;
        cout<<op<<b<<endl;
        cout<<"______\n  ";

        //Get the user prediction
        cin>>expected;

        //Evaluate whether prediction is correct
        if(expected == actual){
            cout<<"Correct!\n";
        }
        else{
            cout<<"Incorrect! The correct answer is: ";
            cout<<actual<<endl;
        }

    } while (ch != 5);

    return 0;
}