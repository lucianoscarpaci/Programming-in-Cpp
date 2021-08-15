//C++ program that will help elementary
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//function declarations
int generateQuestionAndAnswer();
void getComment(short commentType);
//main function begins
int main()
{
    srand(time(0));
    //variable declaration
    int correctAns, answer;
    char choice;
    //repetitive operators
    do{
        //generate new questions
        correctAns = generateQuestionAndAnswer();
        do{
            //prompt the message
            cout<<endl<<"Your answer: "; cin>>answer;
            //tests conditions
            if(answer == correctAns)
            {
                getComment(1);
            }
            else
            {
                getComment(1);
            }

        }
        //iterate until you get correct answer
        while(answer != correctAns);
        cout<<endl<<"Try another question? [y/n]"; cin>>choice;
    }
    while(choice == 'y');
    return 0;
}
int generateQuestionAndAnswer()
{
    //local variables
    int num1, num2;
    //generate two random numbers
    num1 = 1 + rand() % 10;
    num2 = 1 + rand() % 10;
    //ask user what is num1 x num2
    cout<<endl<<"How much is "<<num1<<"times"<<num2;
    return num1 * num2;
}
/* Display message
1 for correct answer comment
0 for incorrect answer
*/
void getComment(short commentType)
{
    if(commentType == 1)
    {
        cout << "Very good!"<<endl;
    }
    else
    {
        cout<<"No. Please try again."<<endl;
    }
}