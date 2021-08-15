#include<iostream>
using namespace std;

int main()
{
    //declare variables
    float sales = 8'600'000;
    float east, d = 0.58;
    //Calc how much east coast division make if company has 8.6m in sales
    east = d * sales;
    cout<<"The east coast division makes: $"<<east<<endl;

    return 0;

}