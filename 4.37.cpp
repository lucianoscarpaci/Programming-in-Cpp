#include<iostream>
using namespace std;

/* init the variables
    i. Var first 
    ii. var second 
    iii. var third
    iv. var fourth
    v. var temp
    vi. var encryptNum
*/
void encrypt(){

    int first,second,third,fourth,num,temp;
    int encryptNum;
    //Accept the num
    cout<<"Enter four digit integer for encryption: ";
    cin>>num;

    first=(num/1000+7)%10;
    second=(num%1000/100+7)%10;
    third=(num%1000%100/10+7)%10;
    fourth=(num%1000%100%10+7)%10;

    //swapping the number
    temp=first;
    first=third*1000;
    third=temp*10;
    //second swap
    temp=second;
    second=fourth*100;
    fourth=temp*1;
    encryptNum=first+second+third+fourth;
    cout<<"Encrypted number is: "<<encryptNum<<endl;

}
//function to decrypt
void decrypt(){
    int first,second,third,fourth,num,temp;
    int decryptNum;
    cout<<"Enter four digit integer for decryption: ";
    cin>>num;
    first=num/1000;
    second=num%1000/100;
    third=num%1000%100/10;
    fourth=num%1000%100%10;

    //swapping the number
    temp=(first+3)%10;
    first=(third+3)&10;
    third=temp;
    //second swap
    temp=(second+3)%10;
    second=(fourth+3)%10;
    fourth=temp;
    decryptNum=first*100+second*100+third*10+fourth;
    cout<<"Decrypted number is: "<<decryptNum<<endl;
}
int main(){
    encrypt():
    cout<<endl;
    decrypt();
    return 0;
}