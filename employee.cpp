#include <iostream>
#include <string>

using namespace std;

class Employee
{
    public:
        Employee(string, string, int);
        void setFirstName(string);
        string getFirstName();
        void setLastName(string);
        string getLastName();
        void setMonthlySalary(int);
        int getMonthlySalary();
    private:
        string firstName;
        string lastName;
        int monthlySalary;
};
//Declaration of constructor
Employee::Employee(string first, string last, int salary)
{
    firstName=first;
    lastName=last;
    if(salary>0)
        monthlySalary=salary;
    else
    {
        monthlySalary=0;
        cout<<" The Initial salary is invalid."<<endl;
    }
}
// set the first name
void Employee::setFirstName(string first)
{
    if(first.length() <= 25)
        firstName = first;
}
//set the last name
void Employee::setLastName(string last)
{
    if(last.length() <= 25)
        lastName = last;
}
//set the salary if the salary is not positive set it to zero
void Employee::setMonthlySalary(int salary)
{
    if(salary>0)
        monthlySalary=salary;
    else
    {
        monthlySalary=0;
        cout<<" Salary is invalid."<<endl;
    }
}
// get the first name
string Employee::getFirstName()
{
    return firstName;
}
// get the last name
string Employee::getLastName()
{
    return lastName;
}
//get the monthly salary
int Employee::getMonthlySalary()
{
    return monthlySalary;
}
int main()
{
    //Create an object that has first name, last name and salary
    string first_name, last_name;
    float salary;
    //accept the values from the user
    cout<<"Enter the first name of the employee: ";
    cin>>first_name;
    cout<<"Enter the last name of the employee: ";
    cin>>last_name;
    cout<<"Enter the monthly salary: ";
    cin>>salary;

    Employee Employee1(first_name,last_name,salary);
    cout<<endl<<"Employee's full name is: "Employee1.getFirstName()<<" "<<Employee1.getLastName()<<endl;
    //evaluate the annual salary and find the increment on annual salary
    cout<<"The monthly salary is: "<<Employee1.getMonthlySalary()<< " and annual salary is: "<<Employee1.getMonthlySalary()*12<<endl;
    cout<<endl<<"After 10 percent increment in Annual salary: "<<endl;
    int incrementedSalary1=Employee1.getMonthlySalary();
    //Increment the 10% salary
    incrementedSalary1=incrementedSalary1+(incrementedSalary1*0.1);
    Employee1.setMonthlySalary(incrementedSalary1);
    cout<< "Employee's monthly salary: "<< Employee1.getMonthlySalary()<< " and annual salary is: "<< Employee1.getMonthlySalary()*12<<endl<<endl;
}