#include<iostream>
using namespace std;

/* Create the main
a. Initialized the data types of the variables i, j, and size
b. Prompt the message to enter the size of the square side
in between 1 to 20.
c. Accept the input from the user
*/
int main(){
    int i, j, size;

    //statement to accept the size of the square side from user
    cout<<"Enter the size of the square side in between 1 to 20: ";
    cin>>size;
    cout<<endl;

    if(size<1 || size>20){
        //for invalid size
        cout<<"Invalid size";
    }
    else{
        //for valid size
        for(i=0; i<size; i++){
            for(j=0; j<size; j++){
                if(i==0 || i==size-1){
                    cout<<"#";
                }
                else if(j==0 || j==size-1){
                    cout<<"#";
                }
                else{
                    cout<<" ";
                }
            }
        }
    }
    return 0;
}
