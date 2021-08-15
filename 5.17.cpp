#include<iostream>
using namespace std;

/* init main
 init the variables
    i. type
    ii. sales
    iii. retail
*/
int main(){
    float retail;
    int type, sales;
    cout<<"Enter the product type (from 1 to 5): ";
    cin>>type;
    cout<<"Enter the total number of quantity sold: ";
    cin>>sales;
    switch(type){
        case 1:
            cout<<"Retail price for product 1 is: $2.98"<<endl;
            retail=sales*2.98;
            cout<<"Total retail price is: $"<<retail<<endl;
            break;
        case 2:
            cout<<"Retail price for product 2 is: $4.5"<<endl;
            retail=sales*4.50;
            cout<<"Total retail price is: $"<<retail<<endl;
            break;
        case 3:
            cout<<"Retail price for product 3 is: $9.98"<<endl;
            retail=sales*9.98;
            cout<<"Total retail price is: $"<<retail<<endl;
            break;
        case 4:
            cout<<"Retail price for product 4 is: $4.49"<<endl;
            retail=sales*4.49;
            cout<<"Total retail price is: $"<<retail<<endl;
            break;
        case 5:
            cout<<"Retail price for product 4 is: $6.87"<<endl;
            retail=sales*6.87;
            cout<<"Total retail price is: $"<<retail<<endl;
            break;
        default:
            cout<<"Invalid product";
            break;    
    }
    return 0;
}