//Figure 6.17
//Passing arguments by value and by reference 
#include<iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int&);
int main(){
    int x{2}; //value by value
    int z{4}; //value by reference

    //square by value
    cout<<"x = "<<x<<" before squareByValue\n";
    cout<"Value returned by squareByValue:";
    << squareByValue(x) <<endl;
    cout<<"x = "<<x<<" after squareByValue\n"<<endl;

    //demonstrate squareByReference
    cout<<"z = "<<z<<" before squareByReference"<<endl;
    squareByReference(z);
    cout<<"z = "<<z<<" after squareByReference"<<endl;

    return 0;

}
int squareByValue(int number){
    return number *= number;
}
void squareByReference(int& numberRef){
    numberRef *= numberRef; 
}