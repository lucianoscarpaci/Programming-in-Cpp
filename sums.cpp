#include<iostream>
using namespace std;

int main(){
    //variable declaration
    unsigned int sum{0};
    unsigned int x{1};

    //loop declaration from 1 to 10
    while(x<=10){
        sum += x;
        ++x;
    }
    //print the sum of the numbers
    return 0;
}