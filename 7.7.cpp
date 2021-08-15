//bar chart to display array graphically
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main(){
    const size_t arraySize{11};
    array<unsigned int, arraySize> n{0,0,0,0,0,0,1,2,4,2,1};

    cout<< "Grade distribution:" << endl;

    //for each element of array n, output a bar of the chart
    for (size_t i{0}; i < n.size(); ++i){
        //output bar labels ("0-9", ...,"90-99:", "100")
        if (0 == i){
            cout << " 0-9: ";
        }
        else if (10 == i){
            cout << "  100: ";
        }
        else {
            cout << i * 10 << "-" << (i * 10) + 9<<": ";
        }

        //print bar of asterisks
        for (unsigned int stars{0}; stars < n[i]; ++stars){
            cout << '*';
        }

        cout << endl;
    }
}