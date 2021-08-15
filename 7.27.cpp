//C++ program to print the prime numbers using an array
#include<array>
#include<iostream>
#include<cmath>
using namespace std;
//declare and initialize const variable
const size_t arraySize{ 1000 };
int main() {
    //declare array prime
    array<bool, arraySize> prime;
    int counter=0;
    //set all array elements to true
    for(bool& i : prime)
    i = true;
    //check multiples of current subscript
    for (size_t i {1}; i < arraySize; ++i) {
        //start with array subscript position 2
        for(size_t i{1}; i < arraySize; ++i) {
            if (prime[i] == 1 && i != 1){
                //loop through remainder of array
                for (size_t a {i}; a <= arraySize; a++){
                    //all multiples of loop are set to 0
                    if (a % i == 0 && a != i){
                        prime[a] = false;
                    }
                }
            }
        }
    }
    cout << "Prime numbers:\n" << endl;
    //display prime numbers from 2 to 1000
    for (size_t i{2}; i < arraySize; ++i){
        if (prime[i]){
            cout << i << " ";
            ++counter;
        }
    }
    cout << "\nTotal prime numbers between 2 and 1000: "
    <<counter;
    return 0;
}
//create an array of arraySizeelements
array<bool, arraySize> prime;
//all array elements are initialized to true
