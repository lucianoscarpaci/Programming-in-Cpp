#include<iostream>
using namespace std;

//Function prototype
double getAverage(double[][4], int);
char getLetterGrade(double);

int main()
{
    //Declare array to store name 5 students
    string names[5];

    //Declare array to store letter grades.
    char letters[5];
    //two-dimensional array 5 rows for students 4 columns for tests
    double scores[5][4];
    //Declare array to store averages
    double averages[5];
    //Take input
    cout << "Enter data:\n";

    //For loop to fill array student names
    for(int i=0; i<5; i++)
    {
        cout << "Enter student "<<i+1<<"'s name: ";
        cin>>names[i];
        //For-loop to repeat once for every test
        for(int j=0; j<4; j++)
        {
            cout<<"Test "<<j+1<<" score: ";
            cin>>scores[i][j];

            //use while-loop to validate scores
            while(scores[i][j] < 0 || scores[i][j] > 100)
            {
                cout<<"Please enter a score between 0 and 100: ";
                cin >> scores[i][j];
            }
        }
        //Use the averages to getLetterGrade
        averages[i] = getAverage(scores,i);
        letters[i] = getLetterGrade(averages[i]);
        cout<<endl;
    }

    //Display student names and their average scores
    cout << "Name\t\tAverage\t\tLetter Grade\n";

    for(int i=0; i<5; i++)
    {
        cout<<names[i]<<"\t\t"<<averages[i]<<"\t\t"<<letters[i];
        cout<<endl;
    }
    return 0;

}
double getAverage(double testScores[][4], int student)
{
    //declare total and average
    double total = 0.0, average;

    //define 2D array to store lowest score
    double a=testScores[student][0];

    //get total score from current row with a for-loop
    for(int k=0; k<4; k++)
    {
        total += testScores[student][k];

        //update the lowest score
        if(testScores[student][k] < a)
        a=testScores[student][k];
    }
    //Drop the lowest marks from the total
    total -= a;
    //get average and typecast to double
    average = (double)total/3;
    return average;
}
char getLetterGrade(double average)
{
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