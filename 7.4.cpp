//Initializing an array in a declaration
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;

int main() {
    array<int, 5> n{32, 27, 64, 18, 95}; //list initializer

    cout << "Element" << setw(10) << "Value" << endl;
    //output each array element's value
    for (size_t i{0}; i < n.size(); ++i){
        cout << setw(7) << i << setw(10) << n[i] << endl;
    }
}