/* This program tests two arguments based on similarities
and returns the appropiate result */
#include<iostream>
#include<vector>
using namespace std;

//prototype
bool t(vector<int>, vector<int>);

int main()
{
    //Declare three vectors
    vector<int> p1(7);
    vector<int> p2(7);
    vector<int> p3(7);

    //Take input for three vectors
    for(int w=0; w<7; w++)
    {
        cin>>p1[w];
    }

    cout<<"Enter second sequence: ";

    for(int w=0; w<7; w++)
    {
        cin>>p2[w];
    }

    cout<<"Enter third sequence: ";

    for(int w=0; w<7; w++)
    {
        cin>>p3[w];
    }
    //Check whether p1 and p2 match
    if (t(p1, p2))
        cout << "ERROR: p1 and p2 report to be the same.";
    else
        cout << "SUCCESS: p1 and p2 are different.\n";
    //Check p1 and p3 match
    if (t(p1, p3))
        cout << "ERROR: p1 and p3 report to be the same.";
    else
        cout << "SUCCESS: p1 and p3 are different.\n";
    //check p1 and p1 match
    if (t(p1, p1))
        cout << "ERROR: p1 and p1 report to be the same.";
    else
        cout << "SUCCESS: p1 and p1 are different.\n";
    //ret
    return 0;
}
//function def to check whether codes are same or not
bool t(vector<int> cp, vector<int> dp)
{
    //For-loop starting from 0, till size of custPIN
    for(int k=0; k < cp.size(); k++)
    {
        if (cp[k] != dp[k])
            return false;
    }
    //if values are same return true
    return true;
}
