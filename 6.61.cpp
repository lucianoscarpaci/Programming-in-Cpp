#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
//function declarations
int generateProblem(int,int);
void correctMessage();
void incorrectMessage();
bool checkDone(int,int);
//define enum
enum Type { ADDITION = 1; SUBTRACTION, MULTIPLICATION, DIVISION, RANDOM};
//the main
int main()
{
    //set vars to zero
    int response = 0;
    int correct = 0;
    int incorrect = 0;
    //difficulty level
    int level;
    int problemType;
    //get problem type from user
    do
    {
        cout<<"Choose type of problem to evaluate:"
        <<endl<<"Enter: 1 for addition, Enter: 2 for subtraction"<<endl
        <<"Enter: 3 for multiplication, 4 for division"<<endl
        <<"Enter 5 for a combination of 1 through 4"<<endl<<endl<<"Enter the choice";
        cin>>problemType;
    }
    //while user chooes 1 - 5
    while(problemType < 1 || problemType > 5);
    //accept the difficulty
    cout<<"Enter difficulty level: ";cin>>level;cout<<endl;
    srand(time(0));
    //loop until sentinel value read from user
    while(response != -1)
    {
        //get the product of two numbers
        int answer = generateProblem(level, problemType);
        cin >> response;
        //loop until sentinel value or correct response
        while(response != -1 && response != answer)
        {
            //update the total of incorrect responses
            ++incorrect;
            //tests the progress
            if(checkDone(correct,incorrect))
            {
                //done 10 responses; reset for next person
                correct = incorrect = 0;
                break;
            }
        }
        incorrectMessage();
        cin>>response;
    }
    //conditions for the correct response
    if(response == answer)
    {
        //update the total of correct responses
        ++correct;
        //tests the progress
        if(checkDone(correct,incorrect))
        {
            //done 10 responses; reset for next person
            correct = incorrect = 0;
            continue;
        }
        correctMessage();
    }
    cout<<"Thats all for now. Bye."<<endl;

}
//generates new product
int generateProblem(int level, int type)
{
    //maximum value for a particular level except 1
    int max = static_cast<int>(pow(10.0, level));
    //generate two random numbers
    int x = rand() % max;
    int y = rand() % max;
    if(type == RANDOM)
        type = 1 + rand() % 4;
    
    //generate problem-based on requested problem type
    switch(type)
    {
        case ADDITION:
            cout<<"How much is "<<x<<" plus "<<y<<"? ";
            return x + y;

        case SUBTRACTION:
            if(x < y) //check if negative, then swap
            {
                int temp = x;
                x = y;
                y = temp;
            }
            cout<<"How much is "<<x<<" minus "<<y<<" ? ";
            return x - y;
        
        case MULTIPLICATION:
            cout<<"How much is "<<x<<" times "<<y<<" ? ";
            return x * y;

        case DIVISION:
            while(y == 0)//eliminate divide by zero
                y = rand() % max;

            x *= y; //create nice division
            cout<<"How much is "<<x<<"divided"<<y<<" ? ";
            return x / y;

    }
}
//correctMessage randomly chooses responses
void correctMessage()
{
    //generate random number between 0 and 3
    switch( rand() % 4)
    {
        case 0:
            cout<<"Very good!";
            break;
        case 1:
            cout<<"Excellent!";
        case 2:
            cout<<"Nice work!";
        case 3:
            cout<<"Keep up the good work!";
            break;
    }
    cout<<endl<<endl;
}
//incorrectMessage randomly chooses response for incorrect
void incorrectMessage()
{
    //generate random number between 0 and 3
    switch(rand() % 4)
    {
        case 0:
            cout << "No. Please try again.";
            break;
        case 1:
            cout<< "Wrong. Try once more.";
            break;
        case 2:
            cout<<"Don't give up!";
            break;
        case 3:
            cout<<"No. Keep trying.";
            break;
    }
    cout<<endl<<"?";
}
//based on number of correct and incorrect
bool checkDone(int right, int wrong)
{
    //if we reached a total of 10 responses
    if(right + wrong == 10)
    {
        //check whether student got 75% correct
        if(static_cast<double>(right)/(right+wrong) < .75)
            cout<<endl<<"please ask teacher for extra help"<<endl<<endl;
        else
            cout<<endl<<"You are ready to go to the next level"<<endl<<endl;
        return true;
    }
    return false;
}