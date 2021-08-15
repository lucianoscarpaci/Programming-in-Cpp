/* This program reads data from b.txt and g.txt 
and takes input to check whether name is in the list */

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

//prototypes
vector<string> getVector(string);
bool issuccessful(string, vector<string>);
string getBoys_Name();
string getGirls_Name();
void display_Boy_Result(string, vector<string>);
void display_Girl_Result(string, vector<string>);
int main()
{
    string boyName;
    string girlName;

    //init vectors with names from the files
    vector<string> boyNames(getVector("b.txt"));
    vector<string> girlNames(getVector("g.txt"));

    //Get the names as input from the user
    boyName = getBoys_Name();
    girlName = getGirls_Name();

    //Display the results
    display_Boy_Result(boyName, boyNames);
    display_Girl_Result(girlName, girlNames);

    return 0;
}

vector<string> getVector(string filename)
{
    string val;
    //To store values from the file
    vector<string> vals;

    //File stream object
    ifstream input;

    //Open the file
    input.open(filename);

    if(input)
    {
        while(input >> val)
        {
            //store value in vector
            vals.push_back(val);
        }
    }
    else
    {
        //Display an error name
        cout << "Error opening the file.\n";

        exit(0);
    }

    return vals;
}
bool issuccess(string item, vector<string> values)
{
    //init the status
    bool status = false;

    //search the vector for item
    for(string value: values)
    {
        //Determine if item is in the vector
        if(item == value)
        {
            status = true;
        }
    }
    return status;
}

string getBoys_Name()
{
    //to store the boys name
    string name = "N";
    //Access the boys name from user
    cout << "Enter a boy's name to be searched\n";
    cin >> name;

    //return boys name
    return name; 
}

string getGirls_Name()
{
    string name = "N"; //To hold girl's name

    //Access girls name from the user
    cout << "Enter a girl's name to be searched\n";
    cin >> name;

    //return the girls name
    return name;
}
//Function to check boy's name in the file
void display_Boy_Result(string val, vector<string> vals)
{
    //Display the result for the boy's name entered
    if(val == "N" || val == "n")
    {
        cout << "The boy's name entered by the user.\n";
    }
    else if (issuccess(val, vals))
    {
        cout << val 
        << "is one of the most popular boy's names.\n";
    }
    else
    {
        cout<<val
        << "is not one of the most popular boy's names.\n";
    }
}
//Function to check girl's name in the file
void display_Girl_Result(string val, vector<string> vals)
{
    if(val == "N" || val == "n")
    {
        cout<<"The girl's name entered by the user.\n";
    }
    else if(issuccess(val, vals))
    {
        cout << val
        << "is one of the most popular girl's names.\n";
    }
    else
    {
        cout << val
        << "is not one of the most popular girl's names.\n";
    }
}