//header file to perform input and output in 
//the program
#include<iostream>
//set the string
#include<cstring>
using namespace std;
//define the value of N
#define N 8
//print the possible solutions of the 8 queen problem
void printSolution(int board[N][N])
{
    static int k = 1;
    cout << k++ << " - \n";
    //iterate over the row and column of chess board
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++){
            cout <<" "<<board[i][j];
        cout<<"\n";
        }
    }
    cout<< "\n";
}
//int main function
int main()
{
    int board[N][N];
    printSolution(board);
    return 0;
}