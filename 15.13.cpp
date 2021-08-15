//This program displays greatest and smallest number
#include<iostream>
using namespace std;

int main()
{
    const int QUIT_VALUE = -29;
    int num, min, max;

    cout<<endl;

    //Display message and request user to enter value
    cout<<"Enter a number to begin and enter -29\n"<<"To quit the program.\n\n"
    <<"Enter a value: ";
    cin>>num;

    //Initial conditions are equal
    min = max = num;
    //loop runs until quit value
    while (num != QUIT_VALUE)
    {
        if (num < min)
            min = num;
        
        if (num > max)
            max = num;

        //Display message and ask user to enter value
        cout<<"Enter a value: ";
        cin>>num;
    }
    //Display output
    cout<< "Smallest number is: "<<min<<endl;
    cout<< "Largest number is: "<<max<<endl;

    return 0;
}