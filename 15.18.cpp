/* This program reads the population data from file and shows the
population chart with the help of * symbol */
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //Declare all the variables
    int population, startYear = 1900;

    //File stream object linked to People.txt
    ifstream f("People.txt");
    //Terminate the program if file is not opened
    if(!f)
    {
        cout<<"File couldnt be opened!\n";
        return 0;
    }
    //Loop to go until all population numbers have been read
    cout<<"TOWN P POPULATION GROWTH\n";
    cout<<"(each * represents 1,000 people)\n";

    while(f>>population)
    {
        cout<<startYear<<" ";
        //Display * symbol
        for(int x=1; x<= population/1000; x++)
        {
            cout<<"*";
        }

        cout<<endl;

        startYear += 20;
    }
    //Close file f.close()
    f.close();

    return 0;
}