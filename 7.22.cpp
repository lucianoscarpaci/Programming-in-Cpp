//Moving knight problem
#include<iostream>
#include<iomanip>
using namespace std;
//struct initialization
#define KNIGHT 8
typedef struct movingKnight
{
    int io, qq;
}movingKnight;
//print the touring of the knight
void dispKightTour(int touring[KNIGHT][KNIGHT])
{
    //display the tours
    int uu, pp;
    for(uu = 0; uu < KNIGHT; uu++)
    {
        for(pp = 0; pp < KNIGHT; pp++)
        {
            cout<<touring[uu][pp]<<"\t";
        }
        cout<<endl;
    }
}
//check for move validation
bool IsMvPossible(movingKnight nxtMove, int touring[KNIGHT][KNIGHT])
{
    int uu = nxtMove.io;
    int pp = nxtMove.qq;
    //validate the move
    if((uu >= 0 && uu <= KNIGHT) && (pp >= 0 && pp < KNIGHT) && (touring[uu][pp] == 0))
        return true;
    return false;
}
//evaluate the tour maps
bool findingTour(int touring[KNIGHT][KNIGHT], movingKnight knightMovings[], 
movingKnight currMove, int mv_cnt)
{
    int uu;
    movingKnight nxtMove;
    //find the tour
    if (mv_cnt == KNIGHT*KNIGHT -1)
    {
        return false;
    }
    // check for the possible moves
    for (uu = 0; uu < KNIGHT; uu++)
    {
        nxtMove.io = currMove.io + knightMovings[uu].io;
        nxtMove.qq = currMove.qq + knightMovings[uu].qq;
        if (IsMvPossible(nxtMove, touring))
        {
            touring[nxtMove.io][nxtMove.qq] = mv_cnt+1;
        }
        else
        {
            touring[nxtMove.io][nxtMove.qq] = 0;
        }
    }
    return true;
}
//define the knight's tour
void knightsTour()
{
    //variable declarations
    int touring[KNIGHT][KNIGHT];
    int uu,pp;
    for(uu = 0; uu < KNIGHT; uu++)
    {
        for(pp = 0; pp < KNIGHT; pp++)
        {
            touring[uu][pp] = 0;
        }
    }
    movingKnight knightMovings[8]={{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
    movingKnight currMove = {0,0};
    //conditions to validate the moves
    if(findingTour(touring, knightMovings, currMove,0) == false)
    {
        cout<<"\nKnight touring does not exist";
    }
    else
    {
        cout<<"\nTour exist ...\n";
        dispKightTour(touring);
    }
}
//main function
int main()
{
    //call the functions
    knightsTour();
    cout<<endl;
    return 0;
}