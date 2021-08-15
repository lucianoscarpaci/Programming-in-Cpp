//This program calculates total calories were consumed

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // Constant Variables declaration
    const int COOKIES_PER_BAG = 30,
            SERVINGS_PER_BAG = 10,
            CALORIES_PER_SERVING = 300;
    //Variable declaration of float type
    float cookies_eaten, servings_eaten,
    calories_consumed;
    //Find cookies per serving
    double cookies_per_serving = COOKIES_PER_BAG / SERVINGS_PER_BAG;

    //Ask the user how many cookies were eaten
    cout<<endl;
    cout<< "How many cookies were eaten? ";
    cin>>cookies_eaten;

    //Find the number of servings
    servings_eaten = cookies_eaten / cookies_per_serving;

    //Find calories consumed
    calories_consumed = servings_eaten * CALORIES_PER_SERVING;

    cout<< '\n' <<setprecision(2) << fixed << right;
    //Show no of cookies per bag
    cout<< "Number of cookies per bag     =";
    cout<<setw(8) << COOKIES_PER_BAG     <<endl;
    //Show number of servings
    cout<< "Number of servings per bag     =";
    cout<<setw(8) << SERVINGS_PER_BAG     <<endl;
    //Show number of calories per serving
    cout<< "Number of calories per serving    =";
    cout<<setw(8) << CALORIES_PER_SERVING     <<endl;
    //Show number of cookies per serving
    cout<< "Number of cookies per serving     =";
    cout<<setw(8) << cookies_per_serving<<endl;
    //Show number of cookies eaten
    cout<< "Number of cookies eaten     =";
    cout<<setw(8) << calories_consumed<<endl;
    //Show number of servings eaten
    cout<< "Number of servings eaten    =";
    cout<<setw(8) << servings_eaten<<endl;

    return 0;


}