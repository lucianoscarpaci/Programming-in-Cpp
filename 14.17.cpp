/* The program displays the height and date for three
vaults of an athlete in increasing order of height
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    //Declare variables
    string name, d1, d2, d3;
    double hght1, hght2, hght3;

    //Display the message to enter the name
    cout << "Enter the name of an athlete: \n";
    cin >> name;
    //Display the message to enter first vault's jump date
    cout << "Enter the date of the first jump: \n";
    cin >> d1;
    //Display the message to enter first vault's jump height
    cout << "Enter the height of the first jump(in meters): \n";
    cin >> hght1;
    //Display the message to enter second vault's jump date
    cout << "Enter the date of the second jump: \n";
    cin >> d2;
    //Display the message to enter second vault's jump height
    cout << "Enter the height of the second jump: \n";
    cin >> hght2;
    //Display the message to enter third vault's jump date
    cout << "Enter the date of the third jump: \n";
    cin >> d3;
    //Display the message to enter third vault's jump height
    cout << "Enter the height of the third jump (in meters): \n";
    cin >> hght3;

    //Validate input for three heights using boolean variables
    bool va_1 = (hght1 >= 2 && hght1 <= 5);
    bool va_2 = (hght2 >= 2 && hght2 <= 5);
    bool va_3 = (hght3 >= 2 && hght3 <= 5);

    //Validate input to ensure three heights are in range
    if(va_1 && va_2 && va_3)
    {
        //Determine the best, second best, and third best heights
        if(hght1 > hght2 && hght2 > hght3){
            cout << "1. " << d1 << "  "<< hght1 << "\n2.  " << d2 << "  " << hght2;
            cout<<"\n3. " << d3 << "  "<< hght3;
        }
        if(hght1 > hght3 && hght3 > hght2){
            cout << "1.  " << d1 << "  "<<hght1 << "\n2.  " << d3 << "  " << hght3;
            cout << "\n3. " << d2 << "  "<< hght2;
        }
        if(hght2 > hght1 && hght1 > hght3){
            cout << "1.  " << d2 << "  "<<hght2 << "\n2.  " << d1 << "  " << hght1;
            cout << "\n3. " << d3 << "  "<<hght3;
        }
        if(hght2 > hght3 && hght3 > hght1){
            cout << "1.  " << d2 << "  " << hght2 << "\n2.  " << d3 << "  " << hght3;
            cout << "\n3. " << d1 << "  " << hght1;
        }
        if(hght3 > hght1 && hght1 > hght2){
            cout << "1.  " << d3 << "  " << hght3 << "\n2.  " << d1 << "  " << hght1;
            cout << "\n3. " << d2 << "  " << hght2;
        }
        if(hght3 > hght2 && hght2 > hght1){
            cout << "1.  " << d3 << "  " << hght3 << "\n2.  " << d2 << "  " << hght2;
            cout << "\n3. " << d1 << "  " << hght1;
        }

    }
    else{
        cout << "Invalid heghts! Enter values within 2.0 and 5.0. Try again.\n";
    }
    return 0;
}