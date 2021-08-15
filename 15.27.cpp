/* This program calculate the average number of steps
recorded using a tracker. */
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Declare the variables
    int num, co = 1;
    double s, avg;

    ifstream inputFile;

    //Open the file
    inputFile.open("file.txt");

    //validate input file
    if (inputFile)
    {
        //Iterate through months
        for(int mo=1; mo <= 12; mo++)
        {
            s = 0;
            //Months with 31 days
            if (mo == 1 || mo == 3 || mo == 5 || mo == 7 || mo == 8 || mo == 10 || mo == 12)
            {
                //Iterate through days
                for (int d = 1; d <= 31; d++)
                {
                    // Read number
                    inputFile>> num;

                    //Sum
                    s = s + num;
                }
                //Calculate the average number for this month
                avg = s / 31;
                cout << "Month "<<co++<<": "<<avg<<" steps"<<endl;
            }
            //Months with 30 days
            else if (mo == 4 || mo == 6 || mo == 9 || mo == 11)
            {
                for (int d = 1; d <= 30; d++)
                {
                    inputFile>> num;
                    s = s + num;
                }

                avg = s / 30;
                cout<< "Month "<<co++<<": "<<avg<<" steps"<<endl;
            }
            //Month of february
            else
            {
                for (int d = 1; d <= 28; d++)
                {
                    inputFile>> num;
                    s = s + num;
                }

                avg = s / 28;
                cout<< "Month "<<co++<<": "<<avg<<" steps"<<endl;
            }

        }
    }

    //Close the file
    inputFile.close();

    //Return value
    return 0;
}