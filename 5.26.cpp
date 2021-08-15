#include<iostream>
using namespace std;

int main(){

    for(unsigned int i{1}; i <= 5; i++){
        for(unsigned int j{1}; j <= 3; j++){
            for(unsigned int k{1}; k <=4; k++){
                cout << "*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}