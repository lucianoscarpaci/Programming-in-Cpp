#include<iostream>
//To generate random numbers
#include<cstdlib>
//set the time
#include<ctime>
//program uses namespace
using namespace std;
//declare flip function as void
int flip(void);

int main(){
//init var t and h as zero
//var t = tails
int t = 0;
//var h = heads
int h = 0;
//Create random numbers for 100 values
srand(time(0));
//var i iterate over the 100th times
for(int i = 1; i <= 100; i++)
{
//if(flip() == 0)
    if(flip() == 0){
        //Print "Tails"
        cout<<"Tails"<<endl;
        t++;
    }
    //else
    else {
        //Print Heads
        cout<<"Heads"<<endl;
        h++;
    }
    //output the tails and heads count
    cout<<"Tails count: "<<t<<endl<<"Heads count: "<<h<<endl;

        
}
return 0;
}
int flip(void)
    //Evaluate the flips
{
        //rand() % 2
        return rand() % 2;
}
    
    