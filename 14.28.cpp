/* The program helps select a restaurant depending on the food restrictions and choices. */
#include<iostream>
using namespace std;

int main()
{
    //Declare variables
    string vege, vgn, gfree;

    //Declare and initialize flag variables.
    bool jo=1, mai=1,crnr=1,mm=1,chf=1;

    cout<<"Does anyone in your party follow a vegetarian diet? ";
    cin>>vege;

    cout<<"Does anyone in your party follow a vegan diet? ";
    cin>>vgn;

    cout<<"Does anyone in your party follow a gluten-free diet? ";
    cin>>gfree;

    //Change flag values depending on user inputs
    if(vege == "yes" || vege == "yes")
                jo = 0;
    if(vgn == "yes" || vgn == "yes")
    {
        jo = 0;
        mai = 0;
        mm = 0;
    }
    if(gfree == "yes" || gfree == "yes")
    {
        jo = 0;
        mm = 0;
    }
    //Display the results
    cout << "Here are your restaurant choices " <<endl;

    if(jo)
        cout << "\tShake Shack"<<endl;
    
    if(mai)
        cout << "\tGrimaldi's"<<endl;
    if(crnr)
        cout << "\tPizza King"<<endl;
    if(mm)
        cout << "\tArby's"<<endl;
    if(chf)
        cout << "\tCali Pizza"<<endl;
    
    return 0;
}