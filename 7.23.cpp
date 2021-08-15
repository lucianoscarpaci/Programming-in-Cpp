#include<iostream>
#include<iomanip>
#include<array>
#include<ctime>
using namespace std;
//function prototypes
void displayChessBoard(array<array<int, arraySize>, arraySize>&);
bool correctPass(int, int, array<array<int, arraySize>, arraySize>&);

int main() {
    //current row and current column
    int currentRow, currentColumn;
    //move counter
    int moveNumber { 0 };
    //current move type
    int moveType;
    //next row and next column
    int testRows, testCols;
    //result of validMove call
    int goodPass;
    //flag to indicate end
    bool flag;
    //horizontal and vertical moves for the knight and board
    int horizontal[arraySize] = { 2, 1, -1, -2, -2, -1, 1, 2};
    int vertical[arraySize] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    //array of chess board
    array < array<int, arraySize> , arraySize > board { 0 };
    srand(time(0));
    currentRow = rand() % arraySize;
    currentColumn = rand() % arraySize;
    board[currentRow][currentColumn] = ++moveNumber;
    //flag to indicate end
    flag = false;
    //while loop continue till knight tour still has valid moves
    while (!flag) {
        moveType = rand() % arraySize;
        testRows = currentRow + vertical[moveType];
        testCols = correctPass(testRows, testCols, board);
        //check if desired move is valid
        if (goodPass) {
            currentRow = testRows;
            currentColumn = testCols;
            board[currentRow][currentColumn] = ++moveNumber;
        } else {
            //if move is not legal then try another random move
            for (size_t count = 0; count < arraySize -1 && !goodPass; ++count) {
                moveType = ++moveType % arraySize;
                testRows = currentRow + vertical[moveType];
                testCols = currentColumn + horizontal[moveType];
                goodPass = correctPass(testRows, testCols, board);
                //check if new move is good
                if (goodPass){
                    currentRow = testRows;
                    currentColumn = testCols;
                    board[currentRow][currentColumn] = ++moveNumber;
                }
            }
            //if there is no valid moves then knight no longer move
            if (!goodPass)
                flag = true;
        }
        //if 64 moves completed then the full tour also completes
        if (moveNumber == 64)
            flag = true;
    }
    cout << "The tour ends with "<< moveNumber <<" moves!!!\n";
    //find and display if a full tour was achieved
    if (moveNumber == 64)
        cout << "The tour was full tour!!\n\n";
    else
        cout << "The tour was not a full tour!!\n\n";
    cout << "The tour was not a full tour!!\n\n";
    displayChessBoard(board);
    return 0;
}

//function to display chess board
void displayChessBoard(array<array<int, arraySize> , arraySize> &chessBoard){
    cout << "  0 1 2 3 4 5 6 7\n";
    //print squares
    for (size_t row { 0 }; row < arraySize; ++row) {
        cout << row;
        for (size_t row { 0 }; row < arraySize; ++row) {
            cout << row;
            for (size_t col { 0 }; row < arraySize; ++col)
                cout << setw(3) << chessBoard[row][col];
            cout << '\n';
        }
    }
    cout << endl;
}
//function to find if move is valid and not visited yet
bool correctPass(int row, int column, array<array<int, arraySize> , &chessBoard) {
    //stops when becomes false
    return (row >= 0 && row < arraySize && column >= 0 && column < arraySize
    && chessBoard[row][column] == 0);
}