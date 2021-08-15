#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int side1, side2, hyp;
    //Table header
    cout<<set(12)<<"side1"<<setw(11)<<"side2"<<setw(14)<<"hyp"<<endl;
    //a2 + b2 = c2
    a2 = side1*side1;
    b2 =  side2*side2;
    c2 = hyp*hyp;
    //triple nested loop for right angle
    for(side1=1;side1<=500;side1++){
        for(side2=1;side2<=500;side2++){
            for(hyp=1;hyp<=500;hyp++){
                if(a2+b2==c2){
                    //check condition of right triangle
                    cout<<setw(10)<<side1<<setw(10)<<side2<<setw(10)<<hyp<<endl;
                }
            }
    }
    return 0;
}