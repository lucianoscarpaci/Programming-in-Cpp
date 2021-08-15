//C++ program initializing arrays
#include<iostream>
using namespace std;
#include<iomanip>

int main(){

    int n[10];

    //init elements od array n to 0
    for (int i = 0; i < 10; i++){
        n[i] = i +100; //set location i to i + 100
    }
    cout << "Element"<<setw(13)<<"Value"<<endl;
    //output each array elements value
    for (int j = 0; j < 10; j++){
        cout << setw(7)<<j<<setw(13)<<n[j]<<endl;
    }

    return 0;
}
