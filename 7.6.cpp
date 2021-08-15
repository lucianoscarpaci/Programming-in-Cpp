//Figure 7.6
//Set arrays to even integers from 2 to 10
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;

int main(){
    //constant variable can be used to specify array size
    const size_t arraySize{5};
    //declare the array values
    array<int, arraySize> values; //array values have 5 elements

    for (size_t i{0}; i < values.size(); ++i){
        values[i] = 2 + 2 * i;
    }

    cout << "Element" << setw(10) << "Value" <<endl;

    //output contents of arrays in tabular format
    for (size_t j{0}; j < values.size(); ++j){
        cout<<setw(7)<<j<<setw(10)<<values[j]<<endl;
    }
}