//This program displays a report of sale of five different 
// flavors of salsa and total jars sold
#include<iostream>
using namespace std;

int main()
{
    //declare the array with 5 flavors
    string salsaNames[] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    //Declare array to hold number of jars sold
    int n[5];
    //Declare variable to store total jars
    int total = 0;
    //Get sales from user using names from parallel names array
    for (int j = 0; j < 5; j++)
    {
        cout << "Number of jars sold for "<<salsaNames[j]<<" salsa: ";
        cin >> n[j];
        //Input validation
        while(n[j] < 0)
        {
            cout<<" Number of jars cannot be negative. Please enter again";
            cin>>n[j];
        }
        //Add the number of jars sold after each iteration
        total += n[j];
    }

    //Declare variables to store the most selling and least selling jar.
    //Also name of salsa dip is shown with index numbers
    int highSale, lowSale, highSaleSub, lowSaleSub;
    //initialize most selling and least selling product
    highSaleSub = 0;
    highSale = n[highSaleSub];
    lowSaleSub = 0;
    lowSale = n[lowSaleSub];

    //Get the most selling and least selling product in the for loop
    for(int x=0; x<5; x++)
    {
        //Update the most selling product and its index value
        if(n[x] > highSale)
        {
            highSale = n[x];
            highSaleSub = x;
        }
        //update the least selling product and its index value
        if(n[x] < lowSale)
        {
            lowSale = n[x];
            lowSaleSub = x;
        }
    }
    //Display the report using for-loop
    cout<<"\nType of Salsa\t\n Number of Jars Sold\n";
    for(int x= 0; x<5; x++)
    {
        cout << salsaNames[x] << "\t\t\t";
        cout << n[x] << endl;
    }
    //Display all the results
    cout << "\nTotal Jars Sold:"<< total;
    cout << "\nHighest selling salsa:" <<salsaNames[highSaleSub];
    cout << "\nLowest selling salsa:"<<salsaNames[lowSaleSub];
    return 0;
}