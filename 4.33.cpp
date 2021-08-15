#include<iostream>
using namespace std;

/* Init the main
a. Init the variables
    i. side1 of double
    ii. side2 of double
    iii. side3 of double
*/
int main(){
    double side1, side2, side3;
    /* Accept inputs:
        i. value of side1 of triangle
        ii. value of side2 of triangle
        iii. value of side3 of triangle
    */
   cout<<"Enter the first side of the triangle: ";
   cin>>side1;
   cout<<endl;
   cout<<"Enter the second side of the triangle: ";
   cin>>side2;
   cout<<endl;
   cout<<"Enter the third side of the triangle: ";
   cin>>side3;
   cout<<endl;

   /* Check if the sum of two sides is less than or equal
    to the third side then:
        i. Print that the sides do not represent a triangle
    a. Otherwise:
        i. Print the side that represents a triangle.
    b. Close the main
    */
   if((side1+side2<=side3)||(side2+side3<=side1)||(side1+side3<=side2)){
        cout<<"These values do not represent the sides of a triangle.";
   }
   else{
       cout<<"These values represent the sides of a triangle";
   }

   return 0;
}