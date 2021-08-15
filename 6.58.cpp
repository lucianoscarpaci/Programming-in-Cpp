//C++ multiplcation problem
#include<iostream>
#include<cstdlib>
//set the time
#include<ctime>
using namespace std;
//function declarations
int generateQuestionAndAnswer();
void getComment(short commentType);

int main()
{
    srand(time(0));
    //variable declarations
    int correctAns, answer;
    char choice;
    //repetitive operators
    do{
        //generate new questions
        correctAns = generateQuestionAndAnswer();
        do{
            //prompt the message
            cout <<endl<<"Your answer: ";cin>>answer;
            //tests the conditions
            if(answer == correctAns)
            {
                getComment(1);
            }
            else
            {
                getComment(0);
            }
        }
        //iterate until choice is yes
        while(choice == 'y');
        return 0;
        
    }
    //generate the questions and answers
    int generateQuestionAndAnswer()
    {
        //local variable declarations
        int num1, num2;
        //generate two random numbers
        num1 = 1 + rand() % 10;
        num2 = 1 + rand() % 10;
        //ask the question
        cout<<endl<<"How much is "<<num1<<" times "<<num2<<"?"<<endl;
        return num1 * num2;
    }
    /*
    Display the message
    1 is for correct answer comment
    0 is for wrong answer comment
    */
   void getComment(short commentType)
   {
       //generate random message each time
       srand(time(0));
       //tests conditions and prompts message for true
       if(commentType == 1)
       {
           switch(rand() % 4)
           {
               case 0: cout<<endl<<"Very good!"; break;
               case 1: cout<<endl<<"Excellent!"; break;
               case 2: cout<<endl<<"Nice work!"; break;
               case 3: cout<<endl<<"Keep up good work!"; break;
           }
       }
       else
       {
           switch(rand() % 4)
           {
               case 0: cout<<endl<<"No please try again"; break;
               case 1: cout<<endl<<"Wrong, Try again"; break;
               case 2: cout<<endl<<"Dont give up!"; break;
               case 3: cout<<endl<<"No. keep trying.";

           }
       }
   }
}
