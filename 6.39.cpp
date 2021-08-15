#include<iostream>
using namespace std;
bool isEvenOdd(int disks);
int moves(int disks);
void MoveTower(int disks,int numberOfMovesToSolve,int src,int tmp,int dst);
void MoveSingleDisk(int src,int dst);
int SelectDisk(int movement,int disks);
int pegNumber(int movement,int SelectDisk, int disks);
//main begins
int main()
{
    //variables
    int disks;
    int src, tmp, dst;
    int numberOfMovesToSolve;
    //accept the vars
    cout<<"Enter the number of disks: "; cin>>disks;
    cout<<"Enter initial peg: "; cin>>src;
    cout<<"Enter temporal peg: "; cin>>tmp;
    cout<<"Enter destination peg: "; cin>>dst;
    //function calls
    numberOfMovesToSolve=moves(disks);
    MoveTower(disks,numberOfMovesToSolve,src,tmp,dst);
    return 0;
}
//isEvenOdd true or false
bool isEvenOdd(int disks)
{
    //declare variable
    bool isEvenOdd;
    //test the conditions for true
    if(disks%2==0){
        isEvenOdd=true;
    }
    else{
        isEvenOdd=false;
    }
    return isEvenOdd;
}
//move the disk from one peg to the next peg
int moves(int disks)
{
    //declare variable
    int moves=0;
    //iterate over number of disks
    for(int i=1; i<=disks;i++)
    {
        moves=(moves*2)+1;
    }
    return moves;
}
//move the disks from one tower to another tower
void MoveTower(int disks, int numberOfMovesToSolve,int src, int tmp,int dst)
{
    //tests the conditions for odd disks
    if(!isEvenOdd(disks))
    {
        for(int movement=1;movement<=numberOfMovesToSolve;movement++){
            //Switch case for every pegs and disk
            switch(pegNumber(movement,SelectDisk(movement,disks)disks))
            {
                //case for each peg numbers to move the disks
                case 1:
                    if(!isEvenOdd(SelectDisk(movement,disks))){
                        MoveSingleDisk(src,dst);
                    else
                        MoveSingleDisk(src,tmp);
                    break;
                case 2:
                    if(!isEvenOdd(SelectDisk(movement,disks))){
                        MoveSingleDisk(dst,tmp);
                    else
                        MoveSingleDisk(tmp,dst);
                    break;
                case 3:
                    if(!isEvenOdd(SelectDisk(movement,disks))){
                        MoveSingleDisk(tmp,src);
                    else
                        MoveSingleDisk(dst,src);
                    break;
                    }
                    }
                    }
            }
        }
    }
    //conditions for even disks
    else
    {
        //iterate over the move of the disks
        for(int movement=1;movement<=numberOfMovesToSolve,movement++)
        {
            //switch case for every pegs and disk
            switch(pegNumber(movement,SelectDisk(movement,disks),disks))
            {
                case 1:
                    if(!isEvenOdd(SelectDisk(movement,disks)))
                        MoveSingleDisk(src,tmp);
                    else
                        MoveSingleDisk(src,dst);
                    break;
                case 2:
                    if(!isEvenOdd(SelectDisk(movement,disks)))
                        MoveSingleDisk(tmp,dst);
                    else
                        MoveSingleDisk(dst,tmp);
                    break;
                case 3:
                    if(!isEvenOdd(SelectDisk(movement,disks)))
                        MoveSingleDisk(dst,src);
                    else
                        MoveSingleDisk(tmp,src);
                    break;
            }
        }
    }
}
//function to print the message
void MoveSingleDisk(int src, int dst)
{
    //print the pegs and towers
    cout<<"Move the disk from peg "<<src<<" ---> "<<" peg "<<dst<<'\n';
}
int SelectDisk(int movement, int disks)
{
    //declare variables
    int whichDisk;
    int start=1;
    int increment=2;
    int movements=moves(disks);
    //iterate over the disks
    for(int i=1; i<=disks; i++)
    {
        //iterate over the movements of the disks
        for(int j=start;j<=movements;j+=increment)
        {
            if(movement==j)
            {
                whichDisk=i;
            }
        }
        //change the value for the next disk
        start*=2;
        increment*=2;
    }
    return whichDisk;
}
//function to return the peg numnbers
int pegNumber(int movement, int SelectDisk, int disks)
{
    //variable declarations
    int pegNumber=0;
    int increment=2;
    int start=1;
    //iterate over the disks
    for(int i=1;i<=disks;i++)
    {
        //test the disk number
        if(i==SelectDisk)
        {
            //move to the next peg
            for(int j=start;j<=movement;j+=increment)
            {
                pegNumber++;
                if(pegNumber==3&&j!=movement)pegNumber=0;
            }
        }
    }
    return pegNumber;
}
