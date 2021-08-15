//declare and initialize a string array alphabet that can hold
//eight characters
//declaring array
#include<iostream>
#include<array>
using namespace std;

int main(){
const size_t arraySize{8};
array<char, 8> alphabet{'a', 'b', 'c', 'd', 'e','f','g','h'};
//print element 6
cout<<alphabet[6];
return 0;
}