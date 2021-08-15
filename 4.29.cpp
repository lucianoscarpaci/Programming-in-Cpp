#include<iostream>
using namespace std;

/* Init the main
    init the vars
    i. i=8
    ii. j=8
*/
int main(){
    int i=8;
    int j=8;
    //Printing the symbol * and white space
    /*
    Init the while loop for 'i' is not equal to 0
        i. Print the symbol '*'.
        ii. Decrement the j by 1.
        iii. End inner while loop.
        iv. endl inner while loop.
    */
    while(i!=0){
        while(j!=0){
            cout<<"*";
            j--;
        }
        cout<<endl;
        if(i%2==0){
            cout<<" "
        }
        j=8;
        i--;
    }
    return 0;
}