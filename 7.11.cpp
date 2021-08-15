#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main(){
    array<int, 5> n; //n is an array of 5 int values
    //initialize elements of array n to 0
    for (size_t i{0}; i < n.size(); ++i){
        n[i] = 5;
    }

    cout << "Element" << setw(10) << "Value" << endl;

    //output each array element's value
    for (int j{0}; j < n.size(); ++j){
        cout << setw(7) << j << setw(10) << n[j] << endl;
    }
}