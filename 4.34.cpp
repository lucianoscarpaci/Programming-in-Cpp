#include<iostream>
using namespace std;

/* Init the main
    i. side1 of double
    ii. side2 of double
    iii. side3 of double
*/
int main(){
    double side1, side2, side3;
    /* Accept the inputs
    i. Value of side 1 of triangle
    ii. value of side 2 of triangle
    iii. value of side 3 of triangle
    */
   cout<<"Enter side 1 of triangle"<<side1;
   cin>>side1;
   cout<<endl;
   cout<<"Enter side 2 of triangle"<<side2;
   cin>>side2;
   cout<<endl;
   cout<<"Enter side 3 of triangle"<<side3;
   cin>>side3;
   cout<<endl;
   double a2 = side1*side1;
   double b2 = side2*side2;
   double c2 = side3*side3;
   /* Check if the sides satisfy Pythagoras theorem
    i. Print the sides represent a right triangle

    a. Otherwise:
    i. Print the sides dont represent a right triangle.
    */
   if((a2+b2==c2)||(b2+c2==a2)||(a2+c2==b2)){
       cout<<"These values represent a right triangle";
   }
   else{
       cout<<"These values do not represent a right triangle ";
   }

   return 0;


}