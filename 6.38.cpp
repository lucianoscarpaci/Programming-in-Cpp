//Tower of Hanoi (recursive)
#include<iostream>
using namespace std;
//tower of hanoi funct
void tower_of_hanoi(int n, char from_rod, char to_rod, char aux_rod);

int main(){
    //number of disks in Tower of Hanoi
    int n = 4;
    //call the recursive function
    tower_of_hanoi(n, '1', '2', '3');
    return 0;
}
void tower_of_hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        //output move disk 1 from peg
        cout << "Move disk 1 from Peg "<<from_rod<<" to peg "<<to_rod<<endl;
        return;
    }
    //call the recursive function
    tower_of_hanoi(n - 1, from_rod, aux_rod, to_rod);
    //move the disk from one peg to next peg
    cout <<"Move disk "<<n<<" from peg "<<from_rod<<" to peg "<<to_rod<<endl;
    tower_of_hanoi(n - 1, from_rod, aux_rod, to_rod);

}