/* This program reads and displays data from files
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    //Declare variables
    string name, winner;
    //Declare variable to count the wins
    int counter =0;
    //Input stream object to open file
    ifstream i("t.txt");
    //Generate an error if file is not opened
    if(!i)
    {
        cout<<"Error";
        return 0;
    }
    cout<<"World series winners over the years:\n";

    /* Read team names from the file and display them
    from a while loop */
    while(getline(i, name))
    cout<< name << endl;

    //Close the file
    i.close();

    //take input from the user
    cout<<"\nName of the team:";
    getline(cin, name);
    //Open another text file
    i.open("w.txt");
    //Generate an error if file does not open
    if(!i)
    {
        cout<<"Error";
        return 0;
    }
    /* Use a while loop to read the file line-by-line
    */
   while(getline(i, winner))
   {
       if(winner == name)
            counter++;
   }
   cout << name << "have won the World Series"<<counter<<" times";

   //Close the file
   i.close();

   return 0;
}