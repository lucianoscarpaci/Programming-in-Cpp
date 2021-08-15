//C++ program to display unique values that user entered
//using a one-dimensional array
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;
int main() {
    //constant to declare array size
    const size_t arraySize{20};
    //declare array a and initialize it to 0
    array<int, arraySize> a{0};
    //declare and initialize variables
    int k = 0, duplicate, value;
    cout << "Enter 20 numbers between 10 and 100 inclusive.\n";
    //loop to find unique values
    for (size_t i{0}; i < arraySize; i++){
        duplicate = 0;
        //input number
        cin >> value;
        //validate entered number lies within 10 and 100
        if (value >= 10 && value <= 100) {
            for (size_t j{0}; j < k; j++){
                //entered number is same as array element
                if (value == a[j]){
                    //set duplicate to 1
                    duplicate = 1;
                    cout << "Duplicate number.\n";
                    break;
                }
            }
            //entered number is not duplicate
            if(!duplicate){
                //assign array element with that number
                a[k++] = value;
            }
        }
        //entered number is not between 10 and 100 inclusive
        else
                cout<<"Invalid number.\n";
    }
    //print-only non-duplicate values
    cout << "\nThe unique values are:\n";
    for (size_t i{0}; a[i] != 0; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
    
    }
    
            

