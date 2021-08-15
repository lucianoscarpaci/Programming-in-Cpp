#include<iostream>
using namespace std;

/* Init the main
    a. init the variable
        i. i=1
    b. init the while loop for true condition only.
        i. Print the multiple of 2 into infinite times.
    c. close the main method
*/
int main(){
    int i=1;
    //Print the multiple of 2 into infinite times.
    while(true){
        cout<<2*i<<" ";
        ++i;
    }
    return 0;
}
