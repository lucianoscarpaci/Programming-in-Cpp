//Figure 7.11
//using range-based for to multiply arrays elements by 2
#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 5> items{1,2,3,4,5};

    //display items before modification
    cout << "items before modification: ";
    for (int item : items){
        cout << item << " ";
    }
    //multiply the elements of items by 2
    for (int& itemRef : items){
        itemRef *= 2;
    }

    //display items after modification
    cout << "\nitems after modification: ";
    for (int item : items){
        cout << item << " ";
    }

    cout << endl;
}