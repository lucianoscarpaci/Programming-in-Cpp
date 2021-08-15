#include<iostream>
using namespace std;

//Define the main method:
int main(){
//Initialized the variables num to 1
int num=1;
//Print the table labels
//N 10*N 100*N 1000*N
cout<<"N\t\t10*N\t\t100*N\t\t1000*N"<<endl<<endl;
//Initialized the while loop up to 5
//print the values in tabular form
//Increment the variable num by 1
while(num<=5){
    cout<<num<<"\t\t"<<(num*10)<<"\t\t"<<(num*100)<<"\t\t"<<(num*1000)<<endl;
    num++;
}
return 0;
}
