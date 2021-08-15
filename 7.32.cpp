//recursiveMinimum function to find the smallest element in an array
#include <array>
#include <iostream>
using namespace std;
//declare and initialize constant variable
const size_t arraySize{ 10 };
//function prototype with two args
int recursiveMinimum(const array<int, arraySize>&, size_t, size_t);
int main(){
    //declare and init array with 10 int values
    array<int, arraySize> findSmall {23, 67, 89, 12,7,100,45,56,5,56};
    //function call with 3 args, array findsmall and starting index 0, 
    //array size - 1
    for (size_t i{0}; i < findSmall.size(); ++i)
    {
        //display element present at index position i in new line
        cout << "findSmall["<<i<<"] = "<<findSmall[i] <<endl;
    }
        cout << "Smallest element of the array is "
        << recursiveMinimum(findSmall, 0, arraySize - 1) <<endl;
        return 0;
}
//function defintion
int recursiveMinimum(const array<int, arraySize>& a, size_t low, size_t high){
    //declare static variable and initialize it first array element
    static int min { a[low] };
    //check if array element is smaller than min
    if (a[low] < min)
        //set min to array element
        min = a[low];
    return low == high ? min : recursiveMinimum(a, low + 1, high);
}