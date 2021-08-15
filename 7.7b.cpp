#include <array>
#include <iostream>
using namespace std;

void printLength(const array<double, 5> &myArray)
{
    cout << "length: "<< myArray.size() << '\n';
}
int main()
{
    array myArray{9.0, 7.2, 5.4, 3.6, 1.8};

    printLength(myArray);

    return 0;
}