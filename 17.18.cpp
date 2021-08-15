/* This program simulates a tic-tac toe game
that is from two-players */
#include<iostream>
using namespace std;

//prototypes
void showBoard(char[][3]);
bool checkWinner(char[][3], char);
void playerMove(char[][3], char);

int main()
{
    //Declare two dimensional array for showing board
    char board[3][3] = {{'*', '*', '*'},
                        {'*', '*', '*'},
                        {'*', '*', '*'}};
    //Declare variable to keep track of moves
    int moves = 0;
    //While loop to run the game
    while(true)
    {
        //Display board
        showBoard(board);

        cout<<"Player 1 moves\n";
        //Get player X to move
        playerMove(board, 'X');
        //increments variable by 1
        moves++;
        //If user wins, display a message.
        if(checkWinner(board, 'X'))
        {
            showBoard(board);
            cout << "\nPlayer 1 (X) wins!\n";
            return 0;
        }
        //If all nine moves are done
        if(moves == 9)
            break;
        //Display the board again.
        showBoard(board);

        cout<<"Player 2 moves\n";

        //Function call for player two.
        playerMove(board, 'O');
        moves++;
        if(checkWinner(board, 'O'))
        {
            showBoard(board);
            cout << "\nPlayer 2 (O) wins!\n";
            return 0;
        }
    }
    //Show the message if game is tied
    showBoard(board);
    cout << "This game is a tie!\n";
    return 0;
}
//Function definition for showing the board.
void showBoard(char board[][3])
{
    //Loop on the rows
    for(int i=0; i<3; i++)
    {
        //Loop on the columns
        for(int j=0; j<3; j++)
        {
            cout<<board[i][j]<<"   ";
            //Display newline after each iteration of inner loop
            cout << endl;
        }
    }

    cout<<endl;
}
//Function definition to check winner
bool checkWinner(char board[][3], char player)
{
    //declare flag variable
    bool flag;

    //Outer Loop
    for(int i=0; i<3; i++)
    {
        //Set flag to true
        flag = true;

        //Inner Loop
        for(int j=0; j<3; j++)
        {
            flag *= (board[i][j] == player);
        }

        if(flag)
            return true;
        else
            continue;
    }
    //Check with the columns
    for(int j=0; j<3; j++)
    {
        flag = true;
        for(int i=0; i<3; i++)
        {
            flag *= (board[i][j] == player);
        }
        if(flag)
            return true;
        else
            continue;
    }

    flag = true;
    //Check diagonal elements
    for(int i=0; i<3; i++)
    {
        flag *= (board[i][i] == player);
    }
    //Check if there is a winner
    if(flag)
        return true;
    //Check the other diagonal (i = 2 - j)
    flag = true;
    //Check the diagonal.
    for(int j=0; j<3; j++)
    {
        flag *= (board[2-j][j] == player);
    }

    //Check if there is a winner
    if(flag)
        return true;

    //If nothing matches, return false.
    return false;

}
//get the move from the player
void playerMove(char board[][3], char player)
{
    //vars to store user move
    int i, j;
    //Get user move
    cout << "Row: ";
    cin >> i;
    cout << "Col: ";
    cin >> j;

    //Check whether rows and columns are valid
    while(board[i-1][j-1] != '*' || i>3 || i<0 || j>3 || i < 0)
    {
        cout <<"Invalid move.";
        cout << "Row: ";
        cin >> i;
        cout << "Col: ";
        cin >> j;
    }
    //After validation, mark new move.
    board[i-1][j-1] = player;

}