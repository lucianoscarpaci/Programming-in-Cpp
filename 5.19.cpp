/* init the main method
    init the variables
    i. num
    ii. pi=4
    iii. i

    b. Accept the num of interations
    c. init the for loop from 3 to 
        num iterations
        Compute val pi
        pi=pi*(((i-1)/i)*((i+1)/i))
        print pi
        close main
*/
#include <iostream>
using namespace std;
int main(){
    double num,i,pi=4;
    cout<<"Enter the num of iterations";
    cin>>num;
    for(i=3;i<=(num+2); i+=2){
        pi=pi*((i-1)/i)*((i+1)/i);
    }
    cout<<"The value of pi is: "<<pi;
    return 0;
}