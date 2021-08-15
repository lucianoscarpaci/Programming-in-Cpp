//Scoping example

#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x{1}; //global variable

int main(){
    cout << "global x in main is "<< x << endl;

    int x{5}; //local variable to main

    cout << "local x in main's outer scope is "<<x<<endl;

    { //block starts a new scope
        int x{7}; //hides both x in outer scope and global

        cout << "local x in main's inner scope is "<<x<<endl;
    }
    cout << "local x in main's outer scope is "<<x<<endl;

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    cout << "\nlocal x in main is "<<x<<endl;
}
//useLocal reinitiates local variable x during each call
void useLocal(){
    int x{25}; //initialize each time useLocal is called

    cout << "\nlocal x is "<<x<<" on entering useLocal"<<endl;
    ++x;
    cout << "local x is "<<x<<" on exiting useLocal"<<endl;
}
/* useStaticLocal initializes static local variable x only the 
first time the function is called; value of x is saved between
calls to this function
*/
void useStaticLocal() {
    static int x{50}; //init first time useStaticLocal is called

    cout << "\nlocal static x is "<<x<<" on entering useStaticLocal"<<endl;
    ++x;
    cout <<" local static x is "<<x<< "on exiting useStaticLocal"<<endl;
}
//useGlobal modifies global variable x during each call
void useGlobal(){
    cout<< "\nglobal x is "<<x<<" on entering useGlobal"<<endl;
    x *= 10;
    cout << "global x is "<<x<<"on exiting useGlobal"<<endl;
}