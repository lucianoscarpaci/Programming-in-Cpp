//Init an array's elements to zero and print the array
#include<iostream>
#include<iomanip>
#include<array>
#include<cstddef>
using namespace std;

int main(){
    array<int, 5> n; //n is an array of 5
    //initalize elements of array n to 0
    for(size_t i{0}; i <n.size(); ++i){
        n[i] = 0;
    }
    cout<<"Element"<<setw(10)<<"Value"<<endl;

    //output each array element's value
    for(size_t j{0}; j < n.size(); ++j){
        cout<<setw(7)<<j<<setw(10)<<n[j]<<endl;
    }
    return 0;
}