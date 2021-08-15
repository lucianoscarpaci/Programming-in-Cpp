/* program prompts user to enter options for
20 questions and matches with correct answers
*/
#include<iostream>
using namespace std;

//Function prototypes
int n(char ans[], const char CORRECT_ANS[], const int SIZE);
void p(char ans[], const char CORRECT_ANS[], const int SIZE);

int main()
{
    //Declare arrays to store actual answers and users answers
    const char CORRECT_ANS[20] = {'A', 'D', 'B', 'B', 'C',
    'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D',
    'C', 'C', 'A', 'D', 'B'};
    char ans[20];

    //Declare a variable to save the result
    int result;
    cout<<"Enter your answers:\n";

    //For-loop iterates for 20 questions
    for(int i=0; i < 20; i++)
    {
        cout<<"Question No. "<<i+1<<".Your choice: ";
        cin>>ans[i];

        //Input validation for the answer to be within A, B, C, or D
        while( ans[i]<'A' || ans[i]>'D')
        {
            cout<<"Answers are only A, B, C, or D.\n";
            cout<<"Enter the choice: ";
            cin>>ans[i];
        }
    }
    //Get the result.
    result = n(ans, CORRECT_ANS, 20);

    //Print the results.
    if(result >= 15)
    {
        cout<<"You have passed the exam.\n";
    }
    else
    {
        cout<<"Sorry, you have failed the exam.\n";
    }
    //Print the correct and incorrect answers
    cout<<"Total correct answers: "<<result<<endl;
    cout<<"Total wrong answers: "<<20-result<<endl;

    //If all answers are not correct
    if(result < 20)
    {
        cout<<"Wrong questions\n";
        p(ans,CORRECT_ANS,20);
    }
    else{
        cout<<"No incorrect answers\n";
    }

    return 0;
}
//Function definiton to get the number of correct answers
int n(char ans[], const char CORRECT_ANS[], const int SIZE)
{
    int correct = 0;

    for(int w=0; w<SIZE; w++)
    {
        //if the answer matches, increment the value
        if(ans[w] == CORRECT_ANS[w])
        {
            correct++;
        }
    }
    //return the number of correct answers
    return correct;
}

//Function definiton
void p(char ans[], const char CORRECT_ANS[], const int SIZE)
{
    for(int w=0; w<SIZE; w++)
    {
        //if there is a wrong answer, print question number
        if(ans[w]!= CORRECT_ANS[w])
        {
            cout<<"Question Number "<<w+1<<endl;
        }
    }
}