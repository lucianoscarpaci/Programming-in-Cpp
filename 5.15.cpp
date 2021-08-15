#include<iostream>
using namespace std;

int main(){
    int num,i,j;
    /* initialize the for loop with variabke 'i' from 1 to 10
        a. init the for loop with variable j from 1 to 'i' times.
            i. when j<=i
            ii. Print the asterisk(*).
            iii. End.
    */
   for (i=1;i<=10;i++){

       //draw first shape
       for(j=1;j<=1;j++){
           cout<<"*";
       }
       for(j=i+1;j<=10;j++){
           cout<<" ";
          
      }
       /* init the for loop with variable j from 1 to (11-i)
       i. When j<(11-i)
       ii. Print the white space
       iii. end
       */
      for(j=1; j<=(11-i);j++){
          cout<<"*";
      }
      for(j=(11-i)+1;j<=10;j++){
          cout<<" ";
      }
      cout<<" ";

      //draw the third shape
      for(j=1;j<=i;j++){
          cout<<" ";
      }
      for(j=i;j<=10;j++){
          cout<<"*";
      }
      cout<<" ";
      //draw the fourth shape
      for(j=1;j<=(11-i);j++){
          cout<<" ";
      }
      for(j=11-i);j<=10;j++){
          cout<<"*";
      }
      cout<<endl;


      
   }
   return 0;

}