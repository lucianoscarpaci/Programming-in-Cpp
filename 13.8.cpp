/* This program displays the calculated number of widgets 
stacked on the pallet */
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Variable declarations
    const float INDV_WIDGET_WEIGHT = 12.5;

    //float variable
    float pallet_wt,
        pallet_with_widgets,
        widget_weight;
    int num_widgets;

    //Ask user how much pallet weighs by itself
    cout << endl;
    cout << "How much does the pallet weigh with widgets? ";
    cin >> pallet_wt;

    //Ask how much pallet weighs with widget stacked on
    cout << endl;
    cout << "How much does the pallet weigh with widgets? ";
    cin >> pallet_with_widgets;

    // Calculate how many stacked-on pallet
    widget_weight = pallet_with_widgets - pallet_wt;
    num_widgets = widget_weight / INDV_WIDGET_WEIGHT;

    //Display output
    //Fixed manipulator
    cout << setprecision(2) << fixed << right <<endl;

    cout << "Individual widget weight   = "<<setw(6);
    cout << INDV_WIDGET_WEIGHT  <<endl;

    cout << "Pallet weight      = "<<setw(6);
    cout << pallet_wt        << endl;

    cout << "Widget weight      = "<<setw(6);
    cout << widget_weight    << endl;

    cout << "Number of widgets  = "<<setw(6);
    cout << num_widgets     << endl;

    return 0;
}