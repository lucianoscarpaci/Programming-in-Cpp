#include<iostream>
using namespace std;

const size_t arraySize{5};
//array declaration
array<float, arraySize> grades;
int main(){

    for(size_t i{0}; i < grades.size(); ++i){
        cin >> grades[i];
    }
    //initalize all array elements to 8
    array<int, 5> values{8,8,8,8,8};
    //initialize all array elements to 8
    //in a for loop
    for(size_t i{0}; i < values.size(); ++i){
        //set elements at position i to 8
        values[i] = 8;
    }
}