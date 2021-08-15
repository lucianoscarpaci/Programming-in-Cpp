/* The program specifies which student is at the 
front of the line, and which student is at the end
of the line */
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    //Declare variables needed
    string name, front, end;

    //File stream object to read data from input file
    ifstream inputFile("File.txt");

    //If file not opened correctly.
    if(!inputFile){
        //Show the error
        cout<< "Error opening file!\n";
        return 0;
    }

    //Assign the first name read from the file
    inputFile>> name;
    front = name;
    end = name;

    //The while loop to read names of each student
    while(inputFile>> name)
    {
        //On each iteration, update first and last
        if(name < front)
            front = name;
        
        if(name > end)
            end = name;
    }
    //Display the result.
    cout<< "First student in line is: "<<front<<endl;
    cout<< "Last student in line is: "<<end<<endl;

    //Close the file
    inputFile.close();

    return 0;
    
}