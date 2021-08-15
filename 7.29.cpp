//Program to solve Eight Queens problem recursively
//include header files
#include<array>
#include<iostream>
using namespace std;
//declare constant variable arraySize and initialize
// with 8.
const size_t arraySize{8};
//function prototype
bool eightQueen(array<array<bool, arraySize>, arraySize>&, int);
int main(){
    //declare array board of type boolean with constant size
    array<array<bool, arraySize>, arraySize>board{};
    //call function that passes array board and value 0
    eightQueen(board, 0);
    //nested for loop to place eight queens at place on board
    for(const auto& rows : board){
        for(const auto& value : rows)
        cout << ' '<<(value ? 'Q' : '*');
        cout << endl;
    }
    return 0;
}
//eightQueen function definition
bool eightQueen(array<array<bool, arraySize>, arraySize>& queen, int columns)
{
    //check columns is equal to array size
    if(columns == arraySize)
        return true;
    //iterate for loop with shift=1 then check shift <=columns && safe:
    for(int rows { }; rows < arraySize; ++rows){
        bool safe { true };
        
    }
}