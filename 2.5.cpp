#include <iostream>
using namespace std;

int main(){


    //declaring and initializing variables
    int number1{0};
    int number2{0};
    int sum{0};

    cout<<"Enter the first integer "<< number1;
    cin>>number1;

    cout<<"Enter the second integer "<< number2;
    cin>>number2;

    sum = number1 + number2;

    cout << "Sum is " << sum <<endl;

    return 0;
}