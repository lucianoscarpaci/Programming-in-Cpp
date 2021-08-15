#include<iostream>
using namespace std;

//perfect funct prototype
void perfect(int);

int main(){

    cout<<"Prompt the perfect nums between 1 and 1000"<<endl;
    //iterate over the range 1 to 1000 to find perfects
    for(int number = 1; number <= 1000, number++)
    {
        //call the perfect function
        perfect(number);
    }
    return 0;
}
void perfect(int number)
{
    for(int i = 1; i < number; i++)
    {
        j = 0;
        if(number % i == 0)
        {
            j += i;
        }
    }
    if(number == j)
    {
        cout<<endl<<"Perfect number is "<<number<<" and its divisors: "<<endl;

        for(int i = 1; i < number; i++)
        {
            if(number % i == 0)
            {
                cout<<i<<", ";
            }
        }
    }
}