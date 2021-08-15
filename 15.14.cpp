//This program displays the names of first and last student in line.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    //Variable declaration
    string student, first, last;
    int num_of_students;

    //Display message
    cout<<"Enter the number of students: ";

    //This will be used if number of student lesser or greater than 25
    while(!(cin>>num_of_students) || (num_of_students < 1 || num_of_students > 25))
    {
        //Display message
        cout<< "ERROR: Enter a number between "<< "1 and 25: ";
        cin.clear();
    }
    /* Request user to enter name of first student and store it into student variable. */
    cout << "Enter the name of student No. 1:  ";
    cin>>student;

    first = last = student;

    if(student < first)
        first = student;
    
    if(student > last)
        last = student;
    //Using for loop to enter the number of student within the range
    for (int i=1; i<num_of_students; i++)
    {
        //Request user to enter name.
        cout<<"Enter the name of student No.  "<<(i + 1)<<": ";
        cin>>student;

        if(student < first)
            first = student;
        if(student > last)
            last = student;
    }
    //Display output
    cout<<"First student in line = "<<first<<endl;
    cout<<"Last student in line = "<<last<<endl;

    return 0;
}