//function mazeGenerator that randomly produces a maze
#include <iostream>
#include <array>
#include <ctime>
using namespace std;
//declare constant array's size
const size_t arraySize { 12 };
//create enumeration to show directions in the maze
enum size { downwards, rightt, upwards, leftt };
//maximum dots for the maze
const int dots { 100 };
//function prototypes
void mazeTraverse(array<array<char, arraySize>, arraySize>&, const int,
    const int, int, int, int);
void mazeGenerator(array<array<char, arraySize>, arraySize>& int *, int *);
void outputMaze(array<array<char, arraySize>, arraySize>&);
bool correctMove(array<array<char, arraySize>, arraySize>&, int, int);
bool coordsEdge(int, int);
int main(){
    //declare two dimensional array maze with rows and columns
    array<array<char, arraySize> , arraySize > maze;
    //declare integer variables representing starting coordinates
    int xBegin, yBegin;
    //current coordinates declaration
    int m, n;
    srand(time(0));
    //for loop to produce #
    for (int rows { 0 }; rows < 12; ++rows)
        for (int columns { 0 }; columns < 12; ++columns)
            maze[rows][columns] = '#';
    //generate a maze
    mazeGenerator(maze, &xBegin, &yBegin);
    //starting row
    m = xBegin;
    //starting col
    n = yBegin;
    mazeTraverse(maze, xBegin, yBegin, m, n, rightt);
    //maze terminated successfully
    return 0;
}
//there is one entrance and exit for the maze
void mazeTraverse(array<array<char, arraySize>, arraySize> &maze, 
    const int xPoint, const int yPoint, int row, int col, int path){
        static bool flag = false;
        //insert x at current position
        maze[row][col] = 'x';
        outputMaze(maze);
        if (coordsEdge(row, col) && row != xPoint && col != yPoint) {
            cout << "Maze exited successfully !!!\n\n";
            //maze completed
            return;
        } else if (row == xPoint && col == yPoint && flag) {
            cout << "Arrived back at the beginning position.\n\n";
            return;
        } else {
            flag = true;
            //for loop to fund appropiate move using switch
            for (int step = path, count = 0; count < 4; ++count, ++step,
            step %= 4)
            switch (step) {
                case downwards:
                //step downwards
                if (correctMove(maze, row + 1, col)) {
                    mazeTraverse(maze, xPoint, yPoint, row + 1, col, leftt);
                    return;
                }
                break;
                case rightt:
                //step right
                if (correctMove(maze, row, col + 1)) {
                    mazeTraverse(maze,xPoint,yPoint,row,col+1, downwards);
                    return;
                }
                break;
                case upwards:
                //step upwards
                if (correctMove(maze, row - 1, col)){
                    mazeTraverse(maze, xPoint, yPoint, row - 1, col, rightt);
                    return;
                }
                break;
                case leftt:
                //step left
                if (correctMove(maze, row, col - 1)) {
                    mazeTraverse(maze, xPoint, yPoint, row, col - 1, upwards);
                    return;
                }
                break;
            }
        }
    }
    //return the valid moves
    bool correctMove(array<array<char, arraySize> , arraySize>&maze, int a, int b){
        return (a >= 0 && a <= 11 && b >= 0 && b <= 11 && maze[a][b] != '#');
    }
    //check boundaries of coordinates
    bool coordsEdge(int m, int n){
        if ((m == 0 || m == 11) && (n >= 0 && n <= 11))
            return true;
        else if ((n == 0 || n == 11) && (n >= 0 && n <= 11))
            return true;
        else
            return false;
    }
    //display the maze
    void outputMaze(array<array<char, arraySize> , arraySize>&maze) {
        for (int m { 0 }; m < 12; ++m) {
            for (int n { 0 }; n < 12; ++n) {
                cout << maze[m][n] << ' ';
            cout << '\n';
            }
        }
        cout << "Press enter to see the next move!!";
        cin.get();
    }
    //randomly produce a maze
    void mazeGenerator(array<array<char, arraySize>, arraySize>&maze
    int *xPtr, int *yPtr) {
        int a, m, n, entrance, exitt;
        do {
            entrance = rand() % 4;
            exitt = rand() % 4;
        } while (entrance == exitt);
        //find entrance position
        if (entrance == 0) {
            //avoid corners
            *xPtr = 1 + rand() % 10;
            *yPtr = 0;
            maze[*xPtr][0] = '.';
        } else if (entrance == 1){
            *xPtr = 0;
            *yPtr = 1 + rand() % 10;
            maze[0][*yPtr] = '.';
        } else {
            *xPtr = 11;
            *yPtr = 1 + rand() % 10;
            maze[11][*yPtr] = '.';
        }
        //find exit position
        if (exitt == 0) {
            a = 1 + rand() % 10;
            maze[a][0] = '.';
        } else if (exitt == 2) {
            a = 1 + rand() % 10;
            maze[a][11] = '.';
        } else {
            a = 1 + rand() % 10;
            maze[11][a] == '.';
        }
        //put dots randomly
        m = 1 + rand() % 10;
        n = 1 + rand() % 10;
        maze[m][n] = '.';
    }

    