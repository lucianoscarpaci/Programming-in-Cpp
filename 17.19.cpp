/* This program is a magic eight ball game, where
user will post questions and get random answers */
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<fstream>
using namespace std;

int main()
{
    //Declare variables
    string question, answer;
    //Iterate through the file
    do
    {
        cout<<"Ask the question: ";
        //Accept input
        getline(cin, question);
        //Declare vector to read responses from file.
        vector<string> response;
        //Take input from the file
        ifstream file("r.txt");
        //Generate an error, if file is not opened
        if(!file)
        {
            cout<<"Error";
        }
        //Read the lines from the file
        while(getline(file, answer))
        {
            //Push the data into the vector element
            response.push_back(answer);
        }
        /*Generate a random index number each time
        program executes. */
        unsigned seed=time(0);
        //seed the random variable based on current time
        srand(seed);
        //Generate 12 random indices
        int index=(rand() % 12);
        //If input taken exists, terminate the program
        if(question == "exit")
            break;
        //Randomly select a response from the vector.
        cout<<response[index]<<endl;

        //close the file
        file.close();
    }
    //validation
    while(question!="exit");
    //Display the message
    cout<<"Thanks for playing"<<endl;


    return 0;
}