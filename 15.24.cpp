/* The program performs calculations on the data 
of a file */
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //File stream object to read data from a file
    ifstream inputFile("Random.txt");
    //Declare and initialize variables
    int counter = 0;
    int total = 0;
    int num;

    //A condition to check if file is opened correctly.
    if(!inputFile)
    {
        //Display an error message if file is opened correctly
        cout<<"Error opening the file.\n";
        return 0;
    }

    //The while loop to iterate through the file.
    while(inputFile>>num)
    {
        counter++;
        //Sum the numbers.
        total += num;
    }
    //Show the results
    cout<<"The content of the file!"<<endl;
    cout<<"Number of numbers: "<<counter<<endl;
    cout<<"Sum of numbers: "<<total<<endl;
    cout<<"Average of numbers:  "<<(1.0*total)/counter<<endl;

    //Closing the file
    inputFile.close();

    //Return value
    return 0;
}