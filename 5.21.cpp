//Program to verify Demorgans theorem

#include<iostream>
using namespace std;

int main(){
    int x,y;
    bool cnd1,cnd2;
    cout<<"Enter the value of x (press 0 to exit): ";
    cin>>x;
    cout<<"Enter the value of y (press 0 to exit): ";
    cin>>y;
    while((x!=0)) or (y!=0)){
        cnd1=!(x<5) && (y>=7);
        //condition 1
        cnd2=!(x<5) || !(y>=7);
        //condition 2
        if(cnd1==cnd2){
            cout<<"The value of !(x<5) && !(y>=7) is !(x<5) || !(y>=7)"<<endl;
        }
        else{
            cout<<"The value of !(x<5) && !(y>=7) is NOT !(x<5) || !(y>=7)"<<endl;           
        }
        cout<<"Enter the value of x (press 0 to exit): ";
        cin>>x;
        cout<<"Enter the value of y (press 0 to exit): ";
        cin>>y;
    }
    return 0;
}