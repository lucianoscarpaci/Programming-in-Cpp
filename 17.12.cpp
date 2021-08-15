//This program displays the grades of five students 
//in four tests
#include<iostream>
using namespace std;

//Function prototypes
double getAverage(double[][4], int);
char getLetterGrade(double);

int main()
{
    //Declare an array to store the names of 5 students
    string names[5];
    //Declare an array to store letter grades
    char letters[5];
    //Declare a two dimensional array for scores
    double scores[5][4];
    //Declare an array to store the averages
    double averages[5];
    //Take input
    cout << "Enter data:\n";
    //For loop to repeat once for every student
    for(int i = 0; i<5; i++)
    {
        cout<<"Enter student "<<i+1<<"'s name: ";
        cin>>names[i];

        //For loop to repeat once for every test
        for(int j=0; j<4; j++)
        {
            cout << "Test "<<j+1<< " score: ";
            cin>>scores[i][j];

            //Use while-loop to validate scores
            while(scores[i][j] < 0 ||scores[i][j] > 100)
            {
                cout<<"Please enter a score between 0 and 100: ";
                cin >> scores[i][j];
            }
        }
    
    //use getLetterGrade in the array
    averages[i] = getAverage(scores,i);
    letters[i] = getLetterGrade(averages[i]);
    
    cout<<endl;
    }
    //Display the students' names and their averages.
    cout << "Name\t\tAverage\t\tLetter Grade\n";

    for(int i=0; i<5; i++)
    {
        cout<<names[i]<<"\t\t"<<averages[i]<<"\t\t"<<letters[i]<<endl;
    }
    return 0;
}
double getAverage(double testScores[][4], int student)
{
    //Declare total and average
    double total = 0.0, average;

    //Get total score from current row (student)
    for(int i=0; i < 4; i++)
    {
        total += testScores[student][i];
    }
    //get the average
    average = (double)total/4;

    //return average
    return average;
}
char getLetterGrade(double average)
{
    //use if/else statements to get grades
    if(average >= 90)
        return 'A';
    else if(average >= 80)
        return 'B';
    else if(average >= 70)
        return 'C';
    else if(average >= 60)
        return 'D';
    else
        return 'F';
}