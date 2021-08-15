//Exercise 4.15

#include<iostrean>
#include<iomanip>
using namespace std;

int main(){

    //variable initialization
    double minSalary=200;
    double sales,com,totSalary;

    //accept input from the user
    cout<<"\nEnter sales in dollars(-1 to end): ";
    cin>>sales;
    //intialized the while loop
    while(sales!=-1){
    //computes the commission
    com=sales*9/100;
    totSalary=com+minSalary;

    cout<<"Salary is: $"<<setprecision(2)<<fixed<<totSalary<<endl;
    cout<<"Enter sales in dollars (-1 to end): ";
    cin>>sales;

    }
    //end
    }
    return 0;
}