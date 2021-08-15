//function to print a string backwards
#include <iostream>
#include <string>
//function prototype
using namespace std;

void stringReverse(const string& s, size_t i);

int main() {
    //declare and init
    string sentence { "Print this string backward."};
    cout <<"original string : \n"<<sentence;
    cout <<"\n\nReverse of the string : \n";
    //function call with two args
    stringReverse(sentence, 0);
    cout << endl;
}
//function definition
void stringReverse(const string& s, size_t i) {
    //if starting and ending subscript is equal
    if (i == s.size())
        return;
        //recursive
        stringReverse(s, i + 1);
        //print string character
        cout << s[i];
}