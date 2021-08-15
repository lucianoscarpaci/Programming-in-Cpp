#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //variable declarations
    const int HUNDRED = 100;
    int males, females, total_students;
    //for calculating percentages
    float num_males, num_females;

    //ask user to enter boys in the class
    cout<<"Enter number of boys in the classroom: ";
    cin>>males;
    cout<<"Enter number of girls in the classroom: ";
    cin>>females;
    cout<<endl;
    //Calculate the total number of boys and girls in the class
    total_students = males + females;
    //Calculate percentage of males
    num_males = (males / static_cast<float>(total_students))*HUNDRED;
    //Calculate percentage of females
    num_females = (females / static_cast<float>(total_students))*HUNDRED;
    //Display total number of students
    cout<<setprecision(1)<<endl;
    cout<<"The total number of students : "<<total_students<<endl;
    cout<<"The percentage of males : %"<<num_males<<endl;
    cout<<"The percentage of females : %"<<num_females<<endl;

    return 0;
}